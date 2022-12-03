#include <iostream>
using namespace std;
class Base
{
	int value; // private
	public:
		Base(int nValue) : value(nValue)  // value = nValue; (member initializer) nValue = 14;
		{
//			cout << nValue << endl; // 14 
		}
	protected:
		void PrintValue() { cout << "Base: " << value << endl; }
};
class Derived: public Base
{
	int value;
	public:
		Derived(int nValue) : Base(nValue*2), value(nValue) // value = nValue; (member initializer) nValue = 7
		{
//			cout << nValue << endl;  // 7
		}
		//void PrintValue() { cout << "Derived: " << value << endl; }
		using Base::PrintValue;
};

int main()
{
	Derived cDerived(7);
	cDerived.PrintValue();
}
