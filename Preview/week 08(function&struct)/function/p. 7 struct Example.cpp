#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

struct record 
{
	char sex;                  
	int age;
	double height, weight;
};

int main( )
{
	record John;
	
	John.sex = 'M';
	John.age = 25;
	John.height = 179.5;
	John.weight = 70;
		
	record Mary = {'F', 23, 160, 50};
	cout << "John's age is " << John.age << " years old" << endl;
	cout << "Mary's age is " << Mary.age << " years old" << endl;
	
	record *rM = &Mary;
	rM -> sex = 'M';
	rM -> age = 22;
	cout << "Mary's age is " << (*rM).age << " years old" << endl;
}
