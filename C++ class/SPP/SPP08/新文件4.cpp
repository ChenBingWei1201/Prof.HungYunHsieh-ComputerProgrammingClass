//PREPEND BEGIN
#include <iostream>
using namespace std;
//PREPEND END
//TEMPLATE BEGIN
	//TODO
class objcount{
	static int n;
	static const char* p;
	public:
	static const char* get_name()
	{
		return p;
	}
	objcount()
	{
		n++;
	}
	static int get_count()
	{
		return n; 
	}
	~objcount()
	{
		n--;
	}
};	
	
//TEMPLATE END
//APPEND BEGIN
int objcount::n=0;
const char* objcount::p = "Object Counter";

int main () {
	cout << objcount::get_name() << endl;
	cout << objcount::get_count() << endl;

	objcount a;         
	cout << a.get_count() << endl;         

	objcount b[5];         
	cout << objcount::get_count() << endl;         

	objcount * c = new objcount;         
	cout << c->get_count() << endl;         

	delete c;         
	cout << objcount::get_count() << endl;         

	return 0;
}
//APPEND END
