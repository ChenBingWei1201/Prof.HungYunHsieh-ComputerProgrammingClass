//PREPEND BEGIN
//PREPEND END

//TEMPLATE BEGIN
#include <iostream>
using namespace std;

struct complex{ 
	int real, imaginary;
	
};

int main(){
	complex num1, num2;
	char u;
	cin >> num1.real >> num1.imaginary; 
	cin >> u;
	cin >> num2.real >> num2.imaginary; 
	complex sum, diff;
	sum.real = num1.real + num2.real;
	sum.imaginary = num1.imaginary + num2.imaginary;
	diff.real = num1.real - num2.real;
	diff.imaginary = num1.imaginary - num2.imaginary;
//TEMPLATE END

//APPEND BEGIN
	if(u=='+'){
		cout << "sum of two complex values is (" << sum.real << ") + j(" << sum.imaginary << ")"<< endl;
	}
	else if(u=='-'){
		cout << "difference of two complex values is (" << diff.real << ") + j(" << diff.imaginary << ")"<< endl;
	}
}

//APPEND END
/*
Description

此題讓同學熟悉 struct 的操作。
請同學建立一個複數的 struct ，
裡面包含實部和虛部。
然後實行兩個複數的加減法。
首先請同學輸入兩個數代表第一個複數的實部和虛部。
然後輸入"+"或"-"。
最後輸入兩個數代表第二個複數的實部和虛部。
然後實作兩個複數的加法和減法並輸出。
template 中"u"代表加號或減號，"sum"為兩個複數和的，"diff"為兩個複數差(第一個減第二個)。
*/
