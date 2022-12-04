#include <iostream>
using namespace std;
class Base
{
	protected:
		int value;
	public:
		Base(int nValue) : value(3*nValue) { }
		const char *GetName() { return "Base"; }
		int GetValue() { return value; } // 15
};
class Derived : public Base
{
	public:
		Derived(int nValue) : Base(nValue) { }
		const char *GetName() { return "Derived"; }
		int GetValue() { return value * 2; } // 30
};

int main()
{
	Derived cDerived(5);
	Base aBase = cDerived; // see cDerived as a parameter, cast into aBase, i.e. Base aBase(cDerived); 
	Base &rBase = cDerived;	// share the same memory space
	Derived *pBase = &cDerived; // pBase point to cDerived;
	cout << "cDerived is a " << cDerived.GetName() << " and has value " << cDerived.GetValue() << endl;	
	cout << "aBase is a " << aBase.GetName() << " and has value " << aBase.GetValue() << endl;
	cout << "rBase is a " << rBase.GetName() << " and has value " << rBase.GetValue() << endl;
	cout << "pBase is a " << pBase->GetName() << " and has value " << pBase->GetValue() << endl;
}
