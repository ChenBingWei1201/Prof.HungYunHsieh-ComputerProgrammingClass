//PREPEND BEGIN
#include <iostream>
using namespace std;

int N =0;

struct CARD{
    char name[100];
    int attack;
    int blood;
};

template <typename X>
void show(X card){
    cout<<"name : "<<card.name<<"\n";
    cout<<"blood : "<<card.blood<<"\n";
    cout<<"attack : "<<card.attack<<"\n";
    cout<<"----------------------------\n";
}
//PREPEND END

//TEMPLATE BEGIN
template <typename X>
void fight(X cards[],int card1,int card2)
{
	int maxi = max(card1, card2), mini = min(card1, card2);
	cards[card1].blood -= cards[card2].attack;
	cards[card2].blood -= cards[card1].attack;
	if (cards[maxi].blood <= 0)
	{
		for (int i = maxi; i < N; i++)
			cards[i] = cards[i+1];
		N--;
		if (cards[mini].blood <= 0)
		{
			for (int i = mini; i < N; i++)
				cards[i] = cards[i+1];	
			N--;
		}
		else
			;
	}
	else
	{
		if (cards[mini].blood <= 0)
		{
			for (int i = mini; i < N; i++)
				cards[i] = cards[i+1];	
			N--;
		}
		else
			;
	}			
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    CARD cards[1000];
    int card1=0,card2=0;

    cin>>N;

    for(int i=0;i<N;++i)
        cin>>cards[i].name>>cards[i].blood>>cards[i].attack;

    while(cin>>card1>>card2)
        fight(cards,card1,card2);

    for(int i =0 ; i<N;++i)
        show(cards[i]);

    return 0;
}

//APPEND END
/*
3
A 100 100 
B 1 1
C 1 1
0 2
*/
