#include <iostream>
using namespace std;

struct record {
	char sex; // 1
	int age;  // 4
	double height, weight; // 8, 8
};
int main( )
{
	record John;
	cout << "size of record: " << sizeof(John) << endl;
	cout << "address of sex: \t " << (void*)&John.sex << endl; // because of "char"
	cout << "address of age: \t " << &John.age << endl;
	cout << "address of height:\t " << &John.height << endl;	
	cout << "address of weight:\t " << &John.weight << endl;
	// cout << sizeof(char) << " " << sizeof(int); 
}
