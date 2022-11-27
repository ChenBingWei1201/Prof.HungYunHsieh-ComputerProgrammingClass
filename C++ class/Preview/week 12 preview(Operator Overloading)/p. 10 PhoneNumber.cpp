#include <iostream>
using namespace std;
class PhoneNumber
{
	friend ostream & operator<<(ostream &, const PhoneNumber &);
	friend istream & operator>>(istream &, PhoneNumber &);
	private:
		char ph[13];
};

ostream & operator<<(ostream &, const PhoneNumber &);
istream & operator>>(istream &, PhoneNumber &);

ostream &operator<<(ostream &output, const PhoneNumber &p) {
	for(int i = 0; i < 13; i++)
		output << p.ph[i];	
	return output;
}
istream &operator>>(istream &input, PhoneNumber &p) {
	for (int i = 0; i < 13; i++)
		input >> p.ph[i];
	return input;
}

int main()
{
	PhoneNumber p;
	char r;
	int c = 0;
	do
	{
		cout << "Please enter your phone numbers" << (c >= 1 ? " again : " : " : ");
		cin >> p;
		cout << "Is this your phone numbers : " << p << "?";
		cout << "\n(y/n) : ";
		cin >> r;
		c++;
	}while(r != 'y');
	cout << "Thanks a lot!";
	return 0;
}

