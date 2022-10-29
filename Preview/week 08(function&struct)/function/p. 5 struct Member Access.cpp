#include <iostream>
#include <iomanip>
using namespace std;

struct record
{
		char gender;
		int age;
		double height, weight;
};

int main()
{
	
	record x;
	x.gender = 'M';
	x.age = 20;
	x. height = 189.5;
	x.weight = 68.7;
	cout << "Your gender: " << x.gender << ", " << "age: " << x.age << "," << endl
		 << "height and weight: " << x. height << ", " << x.weight << " respectively."; 
	cout << endl;
	
	struct account
	{
		int ID;
		int age;
		double money;
	};
	account m;
	m.ID = 11901164;
	m.age = 20;
	m.money = 10000.033;  
	cout << m.ID << " " << m.age << " " << fixed <<setprecision(5) << m.money << endl; 
}


