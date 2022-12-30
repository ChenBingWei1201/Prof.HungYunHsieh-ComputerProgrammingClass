//PREPEND BEGIN
#include <iostream>

using namespace std;

class Complex{
protected:
    double re;
    double im;
public:
    Complex():re(0), im(0){}
    Complex(double a,double b):re(a), im(b){}
    Complex operator+(const Complex&);
    Complex operator||(const Complex&);
    friend istream& operator>>(istream &input,Complex &c);
    friend ostream& operator<<(ostream &output,Complex &c);
};

class Resistor: public Complex{
public:
    Resistor(){ re = 0; im = 0; }
    Resistor(double r){ re = r; im = 0; }
    friend istream& operator>>(istream &,Resistor &);
};
class Capacitor: public Resistor{
private:
    double C;
    double w;
public:
    Capacitor():C(0), w(0){}
    Capacitor(double Cin, double win):C(Cin), w(win){ compute(); }
    void compute();
    friend istream& operator>>(istream &,Capacitor &);
};

class Inductor: public Resistor{
private:
    double L;
    double w;
public:
    Inductor():L(0), w(0){}
    Inductor(double Lin,double win):L(Lin), w(win){ compute(); }
    void compute();
    friend istream& operator>>(istream &,Inductor &);
};

//PREPEND END

//TEMPLATE BEGIN
//TODOs

istream& operator>>(istream &input,Complex &c)
{
	input >> c.re >> c.im;
	return input;
}
ostream& operator<<(ostream &output,Complex &c)
{
	if(c.re == 0 && c.im != 0)
	output << c.im << "i" << endl;
	else if(c.re != 0 && c.im == 0)
	{
		output << c.re << endl;
	}
	else if(c.re == 0 && c.im == 0) 
	{
		output << '0' << endl;
	}
	else
	{
		if( c.im > 0)
		{
			output << c.re << "+" << c.im << "i" << endl;
		}
		else
		{
			output << c.re << c.im << "i" << endl;
		}
		
	}
    return output;
}
Complex Complex::operator+(const Complex& z1)
{
	Complex Z;
	Z.re = re + z1.re;
	Z.im = im + z1.im;
	return Z;
}
Complex Complex::operator||(const Complex& z1)
{
	Complex Z;
	double Zmuti_re,Zmuti_im,Zadd_re,Zadd_im;
	Zadd_re = re + z1.re;
	Zadd_im = im + z1.im;
	Zmuti_re = re * z1.re - im * z1.im;
	Zmuti_im = re * z1.im + im * z1.re;
	Z.re = (Zmuti_re * Zadd_re + Zmuti_im * Zadd_im) / ((Zadd_re)*(Zadd_re) + (Zadd_im)*(Zadd_im));
	Z.im = (Zmuti_im * Zadd_re - Zmuti_re * Zadd_im) / ((Zadd_re)*(Zadd_re) + (Zadd_im)*(Zadd_im));
	return Z;
}

istream& operator>>(istream &input,Resistor &resis)
{
	input >> resis.re;
	resis.im = 0;
	return input;
}

istream& operator>>(istream &input,Capacitor & Cap)
{
	input >> Cap.C >> Cap.w;
	Cap.compute();
	return input;
}
void Capacitor::compute()
{
	re = 0;
	im = -1 / (w*C); 
}

istream& operator>>(istream &input ,Inductor &Indu)
{
	input >> Indu.L >> Indu.w;
	Indu.compute();
	return input;
}
void Inductor::compute()
{
	re = 0;
	im = L * w;
}
//TEMPLATE END
//APPEND BEGIN
int main(){
    Complex Zeq, Zeq2, Zeq3, Zeq4;
    Resistor r1(3), r2(4), r3(5), r4, r5;
    Capacitor zC(0.00003,10000), zC2;
    Inductor zL(0.1,10000), zL2;
    Zeq = (r1||r2||r3);
    Zeq2 = (zC+zL);
    cout << Zeq << Zeq2;

    cin >> r4 >> zC2;
    Zeq3 = r4 + zC2;
    cout << Zeq3;

    cin >> r5 >> zL2;
    Zeq4 = r5 || zL2;
    cout << Zeq4;
    return 0;
}
//APPEND END
