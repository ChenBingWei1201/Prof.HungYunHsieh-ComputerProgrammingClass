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

���D���P�Ǽ��x struct ���ާ@�C
�ЦP�ǫإߤ@�ӽƼƪ� struct �A
�̭��]�t�곡�M�곡�C
�M�����ӽƼƪ��[��k�C
�����ЦP�ǿ�J��ӼƥN��Ĥ@�ӽƼƪ��곡�M�곡�C
�M���J"+"��"-"�C
�̫��J��ӼƥN��ĤG�ӽƼƪ��곡�M�곡�C
�M���@��ӽƼƪ��[�k�M��k�ÿ�X�C
template ��"u"�N��[���δ�A"sum"����ӽƼƩM���A"diff"����ӽƼƮt(�Ĥ@�Ӵ�ĤG��)�C
*/
