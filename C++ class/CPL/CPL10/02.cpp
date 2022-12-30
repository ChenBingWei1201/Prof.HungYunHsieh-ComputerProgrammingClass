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
const uint64_t CARRY = 10000000000000000000ULL;
const uint64_t CARRY_LENGTH = 19U;

class HugeInteger {
public:
    HugeInteger();                     // default constructor
    HugeInteger(const string& s);      // constructor with value
    HugeInteger(const HugeInteger& n); // copy constructor
    ~HugeInteger();                    // destructor

    bool operator < (HugeInteger& n){
        //is this>n true
        this->resize(); n.resize();
        bool is0 = true, n_is0 = true;
        for(int i=0; i<_length; i++) {
            if(_data[i] != 0) is0 = false;
            if(n._data[i] != 0) n_is0 = false;
        }
        if(is0 && n_is0) return false;
        if(_sign != n._sign) {
            if(n._sign == true) {  //n小
                return false;
            }
            else return true;
        }
        else {
            for(int i=0; i<_length; i++) {
                if(_data[i] > n._data[i]) {
                    if(_sign == false) {
                        return false;
                    }
                    else return true;
                }
                else if(_data[i] < n._data[i]) {
                    if(_sign == false) {
                        return true;
                    }
                    else return false;
                }
            }
            return false;
        }
    }
    bool operator > (HugeInteger& n){
        // TODO 4
        //is this>n true
        this->resize(); n.resize();
        bool is0 = true, n_is0 = true;
        for(int i=0; i<_length; i++) {
            if(_data[i] != 0) is0 = false;
            if(n._data[i] != 0) n_is0 = false;
        }
        if(is0 && n_is0) return false;
        if(_sign != n._sign) {
            if(n._sign == true) {  //n小
                return true;
            }
            else return false;
        }
        else {
            for(int i=0; i<_length; i++) {
                if(_data[i] > n._data[i]) {
                    if(_sign == false) {
                        return true;
                    }
                    else return false;
                }
                else if(_data[i] < n._data[i]) {
                    if(_sign == false) {
                        return false;
                    }
                    else return true;
                }
            }
            return false;
        }
    }
    bool operator == (HugeInteger& n){
        // TODO 5
        //is this>n true
        this->resize(); n.resize();
        bool is0 = true, n_is0 = true;
        for(int i=0; i<_length; i++) {
            if(_data[i] != 0) is0 = false;
            if(n._data[i] != 0) n_is0 = false;
        }
        if(is0 && n_is0) return true;
        if(_sign != n._sign) {
            return false;
        }
        else {
            for(int i=0; i<_length; i++) {
                if(_data[i] > n._data[i]) {
                    return false;
                }
                else if(_data[i] < n._data[i]) {
                    return false;
                }
            }
            return true;
        }
    }
    bool operator != (HugeInteger& n){
        // TODO 6
        return !(n==(*this));
    }
    bool operator <= (HugeInteger& n){
        // TODO 7
        return ((n>(*this))||(n==(*this)));
    }
    bool operator >= (HugeInteger& n){
        // TODO 8
        return ((n<(*this))||(n==(*this)));
    }

    HugeInteger& operator ++ ();    // prefix
    HugeInteger operator ++ (int);  // postfix

    void abs(){ _sign = false; } // abs

    // input and output
    friend istream& operator >> (istream& is, HugeInteger& n);
    friend ostream& operator << (ostream& os, const HugeInteger& n);

private:
    bool           _sign; // false for positive ; true for negative
    int64_t      _length; // length of data array
    uint64_t*      _data; // integer array holding the huge integer
    static int64_t _maxl; // max length of data array in exist HugeInteger(s)

    // helper function
    bool isGreater(HugeInteger& n);
    bool isEqual(HugeInteger& n);

    // increase the length of data array to max length
    void resize();
};

// TODO 9
int64_t HugeInteger::_maxl = 1;

HugeInteger::HugeInteger(const HugeInteger& n){
    // TODO 10
    _sign = n._sign;
    _length = n._length;
    _data = new uint64_t[_length];
    for(int i = 0 ; i < _length; ++i)
        _data[i] = n._data[i];
    _maxl = n._maxl;
    return;
}

istream& operator >> (istream& is, HugeInteger& n){
    // TODO 1
    n._length = n._maxl;
    n._data = new uint64_t[n._length];
    n._sign = false;
    string s;
    is >> s;
    // n._length = s.length();
    // if(s[0] == '-') n._length--;
    while( s.length() > n._maxl*CARRY_LENGTH)
        n._maxl <<= 1;
    n._length = n._maxl;
    delete [] n._data;
    n._sign = false;
    n._data = new uint64_t[n._length];
    for(int i=0; i<n._length; i++) n._data[i] = 0;
    if(s[0] == '-') n._sign = true;
    // s 是輸入的字串，s.length() 是字串的長度
    uint64_t p = 1, array_count = n._length-1;
    for(int i=s.length()-1; i>=0 && s[i]!='-'; i--) {
        n._data[array_count] += ((s[i]-'0')*p);
        p *= 10;
        if((s.length()-i)%CARRY_LENGTH == 0) {
            array_count--;
            p = 1;
        } 
    }
    // cout << n << " length in >> : " << n._length << endl;
    return is;
}

// friend ostream& operator << (ostream& os, const HugeInteger& n);
ostream& operator << (ostream& os, const HugeInteger& n){
    // TODO 2
    bool is0 = true;
    for(int i=0; i<n._length; i++) {
        if(n._data[i] != 0) is0 = false;
    }
    if(is0) {
        os << 0;
        return os;
    }
    if(n._sign) os << "-";
    bool b = true;
    // cout << n._length << " length!!!!!!!!!!!!!!!!\n";
    for(int i=0; i<n._length; i++) {
        if(n._data[i] == 0 && b) {
            continue;
        }
        if(!b) {
            os << setfill('0') << setw(CARRY_LENGTH) << n._data[i];
        }
        else {
            os << n._data[i];
        }
        b = false;
    }
    return os;
}



HugeInteger& HugeInteger::operator++(){
    // TODO 11
    bool is0 = true;
    for(int i=0; i<_length; i++) {
        if(_data[i] != 0) {
            is0 = false;
            break;
        }
    }
    if(is0) _sign = false;
    if(_sign) {  //negative
        int i = _length-1, ii = i-1;
        if(_data[i] > 0) {
            _data[i]--;
        }
        else {
            while(_data[ii] == 0) {
                ii--;
            }
            if(_data[ii] == 1) {
                _length--;
            }
            for(int j=ii; j<i; j++) {
                _data[j]--;
                _data[j+1] += CARRY;
            }
            _data[i]--;
        }
    }
    else {  //positive
        int c = 1;
        HugeInteger result(*this);
        for(int i=_length-1; i>=0; i--) {
            _data[i] = (_data[i]+c)%CARRY;
            if(result._data[i]+c >= CARRY) c = 1;
            else c = 0;
        }
        if(c) {
            _length++;
            HugeInteger tmp(*this);
            _data = new uint64_t[_length];
            for(int i=0; i<_length; i++) {
                _data[i+1] = tmp._data[i];
            }
            _data[0] = 1;
        }
    }
    return *this;
}
// Complex& operator++() {  // prefix ++x
//     ++_r;
//     return *this;
// }

HugeInteger HugeInteger::operator++(int){
    // TODO 12
    HugeInteger result(*this);
    ++(*this);
    return result;  //回傳再++
}
// Complex operator++(int) {  // postfix x++
//     Complex cResult(_r,_i); 
//     ++(this->_r); 
//     return cResult;
// }  

HugeInteger::HugeInteger(){
    _length = _maxl;
    _data = new uint64_t[_length];
    for(int i = 0 ; i < _length; ++i)
        _data[i] = 0;
    _sign = false;
    return;
}

HugeInteger::HugeInteger(const string& s){
    while( s.length() > _maxl*CARRY_LENGTH )
        _maxl <<= 1;
    _length = _maxl;
    _data = new uint64_t[_length];
    for(int i = 0 ; i < _length; ++i)
        _data[i] = 0;
    if(s.length() == 0) return;
    _sign = (s[0] == '-');
    for(int i = (_sign?1:0); i < s.length(); ++i){
        _data[(CARRY_LENGTH*_length+i-s.length())/CARRY_LENGTH] *= 10;
        _data[(CARRY_LENGTH*_length+i-s.length())/CARRY_LENGTH] += (uint64_t)((char)s[i]-'0');
    }
    return;
}

HugeInteger::~HugeInteger(){
    delete [] _data;
    return;
}

bool HugeInteger::isGreater(HugeInteger& n){
    this->resize(); n.resize();
    if(_sign != n._sign){
        for(int i = 0 ; i < this->_length ; ++i)
            if(_data[i] || n._data[i]) return !_sign;
    }
    else{
        for(int i = 0 ; i < this->_length ; ++i){
            if( _data[i] > n._data[i]) return !_sign;
            if( _data[i] < n._data[i]) return  _sign;
        }
    }
    return false;
}

bool HugeInteger::isEqual(HugeInteger& n){
    this->resize(); n.resize();
    if(_sign != n._sign){
        for(int i = 0 ; i < this->_length ; ++i)
            if(_data[i] || n._data[i]) return false;
    }
    else{
        for(int i = 0 ; i < this->_length ; ++i)
            if( _data[i] != n._data[i]) return false;
    }
    return true;
}

void HugeInteger::resize(){
    if(_maxl == _length) return;
    uint64_t* temp = _data;
    _data = new uint64_t[_maxl];
    for(int i = 0 ; i < _maxl-_length; ++i)
        _data[i] = 0;
    for(int i = _maxl-_length ; i < _maxl; ++i)
        _data[i] = temp[i+_length-_maxl];
    delete [] temp;
    _length = _maxl;
    return;
}

int main(){
    HugeInteger n1, n2;

    cin >> n1 >> n2;

    HugeInteger n3(n1);
    HugeInteger n4(n3);

    cout << "n1: " << n1 << endl;
    cout << "n2: " << n2 << endl;
    cout << "n3: " << n3 << endl;
    cout << "n4: " << n4 << endl;

    cout << "-------------------------------" << endl;

    cout << (n3 == n1?"n3 == n1":"n3 != n1") << endl;
    cout << (n4 == n3?"n4 == n3":"n4 != n3") << endl;
    n4.abs();
    cout << (n4 == n3?"|n4| == n3":"|n4| != n3") << endl;

    cout << "-------------------------------" << endl;

    cout << (n1 == n2 ? "n1 == n2" : "") << endl;
    cout << (n1 != n2 ? "n1 != n2" : "") << endl;
    cout << (n1 >  n2 ? "n1 > n2"  : "") << endl;
    cout << (n1 <  n2 ? "n1 < n2"  : "") << endl;
    cout << (n1 >= n2 ? "n1 >= n2" : "") << endl;
    cout << (n1 <= n2 ? "n1 <= n2" : "") << endl;

    cout << "-------------------------------" << endl;

    cout << n1 << endl;
    n1++;
    cout << n1 << endl;
    ++n1;
    cout << n1 << endl;

    cout << n2 << endl;
    n2++;
    cout << n2 << endl;
    ++n2;
    cout << n2 << endl;

    return 0;
}
