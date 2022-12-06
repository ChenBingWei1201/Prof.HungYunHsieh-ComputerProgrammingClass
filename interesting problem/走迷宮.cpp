#include<iostream>
#include<cstdio>
#include<conio.h>
#include<windows.h>
using namespace std;

char play_map[100][100]={"#####################",
                         "#o#    #######      #",
					     "# ####         ## ###",
					     "# #    ### ### ## ###",
					     "# # ###### ### ## ###",
					     "# # ###### ##########",
					     "#                    ",
					     "#################### ",};

//起點(1,1)
//終點(6,10)
struct play{
    int x;
    int y;
}player;

void movement(char move_letter){
        switch(move_letter){
            case 'w' :
                if(play_map[player.y-1][player.x]==' '){
                    play_map[player.y][player.x] = ' ';//當前位置為空
                    player.y--;//向上移動
                    play_map[player.y][player.x] = 'o';//當前位置為玩家
                }
                break;
            case 's' :
                if(play_map[player.y+1][player.x]==' '){
                    play_map[player.y][player.x] = ' ';//當前位置為空
                    player.y++;//向下移動
                    play_map[player.y][player.x] = 'o';//當前位置為玩家
                }
                break;
            case 'a' :
                if(play_map[player.y][player.x-1]==' '){
                        play_map[player.y][player.x] = ' ';//當前位置為空
                        player.x--;//向左移動
                        play_map[player.y][player.x] = 'o';//當前位置為玩家
                }
                break;
            case 'd' :
                if(play_map[player.y][player.x+1]==' '){
                    play_map[player.y][player.x] = ' ';//當前位置為空
                    player.x++;//向右移動
                    play_map[player.y][player.x] = 'o';//當前位置為玩家
                }
                break;
            case 'f' :
                play_map[player.y][player.x] = ' ';
                player.y = 1 ;
                player.x = 1 ;
                play_map[player.y][player.x] = 'o';
                break ;
        }
}

void welcome()
{
	cout << "\n\n\t\t\t走  迷  宮";
	cout << "\n\n\t\t      請按任意鍵開始";
	getch();//得到任意鍵
	system("cls");//清空螢幕
	SetConsoleTitle("走迷宮");//設置窗口標題
}

void Set()//把每次光標移動到初始位置
{
	HANDLE hOut;
	COORD pos={0,0};//設置控制台光標位置回到 ( 0, 0 )【之後才能打印地圖】
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);//得到 標準輸出的句柄
	SetConsoleCursorPosition(hOut,pos);
    CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE};//把光標關掉
    SetConsoleCursorInfo(hOut, &cursorInfo);
}


int main()
{
    welcome();//歡迎介面
    player.x = 1;
    player.y = 1;//初始位置
    char move_letter;

    for(int i = 0; i<=7 ; i++) //輸出地圖
        puts(play_map[i]);

    while(1) //不斷讀取玩家行動
	{
		move_letter=getch();//getch() 當用戶按下某個字符時，函數自動讀取，無須按enter
        movement(move_letter);
		Set();
		for(int i = 0; i<=7 ; i++) //每次執行完都要輸出地圖
        	puts(play_map[i]) ;
        if(player.y == 7 && player.x == 20)break;
	}
	cout << "你贏了";
	Sleep(5000);//暫停執行5秒
	return 0;
}
