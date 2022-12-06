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

//�_�I(1,1)
//���I(6,10)
struct play{
    int x;
    int y;
}player;

void movement(char move_letter){
        switch(move_letter){
            case 'w' :
                if(play_map[player.y-1][player.x]==' '){
                    play_map[player.y][player.x] = ' ';//��e��m����
                    player.y--;//�V�W����
                    play_map[player.y][player.x] = 'o';//��e��m�����a
                }
                break;
            case 's' :
                if(play_map[player.y+1][player.x]==' '){
                    play_map[player.y][player.x] = ' ';//��e��m����
                    player.y++;//�V�U����
                    play_map[player.y][player.x] = 'o';//��e��m�����a
                }
                break;
            case 'a' :
                if(play_map[player.y][player.x-1]==' '){
                        play_map[player.y][player.x] = ' ';//��e��m����
                        player.x--;//�V������
                        play_map[player.y][player.x] = 'o';//��e��m�����a
                }
                break;
            case 'd' :
                if(play_map[player.y][player.x+1]==' '){
                    play_map[player.y][player.x] = ' ';//��e��m����
                    player.x++;//�V�k����
                    play_map[player.y][player.x] = 'o';//��e��m�����a
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
	cout << "\n\n\t\t\t��  �g  �c";
	cout << "\n\n\t\t      �Ы����N��}�l";
	getch();//�o����N��
	system("cls");//�M�ſù�
	SetConsoleTitle("���g�c");//�]�m���f���D
}

void Set()//��C�����в��ʨ��l��m
{
	HANDLE hOut;
	COORD pos={0,0};//�]�m����x���Ц�m�^�� ( 0, 0 )�i����~�ॴ�L�a�ϡj
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);//�o�� �зǿ�X���y�`
	SetConsoleCursorPosition(hOut,pos);
    CONSOLE_CURSOR_INFO cursorInfo = {1, FALSE};//���������
    SetConsoleCursorInfo(hOut, &cursorInfo);
}


int main()
{
    welcome();//�w�虜��
    player.x = 1;
    player.y = 1;//��l��m
    char move_letter;

    for(int i = 0; i<=7 ; i++) //��X�a��
        puts(play_map[i]);

    while(1) //���_Ū�����a���
	{
		move_letter=getch();//getch() ��Τ���U�Y�Ӧr�ŮɡA��Ʀ۰�Ū���A�L����enter
        movement(move_letter);
		Set();
		for(int i = 0; i<=7 ; i++) //�C�����槹���n��X�a��
        	puts(play_map[i]) ;
        if(player.y == 7 && player.x == 20)break;
	}
	cout << "�AĹ�F";
	Sleep(5000);//�Ȱ�����5��
	return 0;
}
