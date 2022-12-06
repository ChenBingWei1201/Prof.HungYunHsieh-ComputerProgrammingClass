//PREPEND BEGIN
#include <iostream>
#include <iomanip>
#include <string>

// uncomment line below if you use dev-c++
#include <stdint.h>

using namespace std;

// range of uint64_t is 0 ~ 18,446,744,073,709,551,615
// define 10^19-1 as the max value in single element
// which means we can have 19 '9's
// the U added at the end means this is an unsigned number
const uint64_t CARRY = 10000000000000000000U;
const uint64_t CARRY_LENGTH = 19U;
int max_length = 1; // max length of data array in exist HugeInteger(s)

class HugeInteger {
public:
    HugeInteger();                     // default constructor
    HugeInteger(string& s);      // constructor with value
    ~HugeInteger();                    // destructor

    void resize(); // double the length of data array

    //HugeInteger addition(HugeInteger& n);  //   add
    //HugeInteger subtraction(HugeInteger& n); // minus

    bool isGreaterThan(HugeInteger& n); // >

    void input(string& s); // input a number
    void print();                // display the number

private:
    bool            _sign; // false for positive ; true for negative
    int           _length; // length of data array
    uint64_t*        data; // integer array holding the huge integer
};

//PREPEND END

//TEMPLATE BEGIN

HugeInteger::HugeInteger(){
    // TODO 1
    _length = max_length;
    data = new  uint64_t[_length]();
    _sign = false;
}

HugeInteger::HugeInteger(string& s){
    _length = max_length;
    data = new uint64_t[_length];
    _sign = false;
    input(s);
}

HugeInteger::~HugeInteger(){
    // TODO 2
    delete [] data;
}

void HugeInteger::resize(){
    if(max_length == _length) return;
    uint64_t* temp = data;
    data = new uint64_t[max_length];
    for(int i = 0 ; i < max_length-_length; ++i)
        data[i] = 0;
    for(int i = max_length-_length ; i < max_length; ++i)
        data[i] = temp[i+_length-max_length];
    delete [] temp;
    _length = max_length;
    return;
}

void HugeInteger::input(string& s){
    while( s.length() > max_length*CARRY_LENGTH )
        max_length <<= 1;
    _length = max_length;
    delete [] data;
    // TODO 3
	data = new  uint64_t[_length]();
	if (s[0] == '-')
		_sign = true;
	else
		_sign = false;
	uint64_t p = 1, array_count = _length-1;
	for (int i = s.length()-1; (i >= 0)&&(s[i] != '-'); i--)
	{
		data[array_count] += ((s[i]-'0')*p);
		p *= 10;
		if ((s.length()-i)%CARRY_LENGTH == 0)
		{
			array_count--;
			p = 1;
		}		
	}
    return;
}
void HugeInteger::print()
{
    // TODO 4
    // hint: you will need setw(), setfill('0'), and controll cout carefully.
    bool p = false; // positive
    for (int i = 0; i < _length; i++) 
	{
        if (p) 
			cout << setw(19) << setfill('0') << data[i];
        else if (data[i] != 0 && !p) // negative
        {
        	if (_sign) 
				cout << "-"; // print "-"
        	cout << data[i]; // ¥¿±`cout 
        	p = 1;
		}    
    }
    if (!p) 
		cout << 0;
    return;
}
bool HugeInteger::isGreaterThan(HugeInteger& n){
    this->resize(); n.resize();
    // TODO 5
	if (n._sign > _sign)
		return true;
	else if (n._sign < _sign)
		return false;
	else
	{
		if (_sign == false) // positive
		{
            for (int i = 0; i < _length; i++) 
			{
                if (data[i] > n.data[i]) 
					return true;
                else if (data[i] < n.data[i]) 
					return false;
            }
        }
        else  // negative
		{
           for (int i = 0; i < _length; i++) 
		   {
                if (data[i] > n.data[i]) 
					return false;
                else if (data[i] < n.data[i]) 
					return true;
        	}
        }
	}
	return 0;
}
//TEMPLATE END

//APPEND BEGIN
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    HugeInteger n1;
    n1.input(s1);
    HugeInteger n2(s2);
    HugeInteger n3;
    n3.input(s2);

    n1.print();
    cout << endl;
    n2.print();
    cout << endl;
    n3.print();
    cout << endl;

    n3.input(s1);
    n3.print();
    cout << endl;

    cout << (n1.isGreaterThan(n2)?"Yes":"No") << endl;

    return 0;
}
//APPEND END
