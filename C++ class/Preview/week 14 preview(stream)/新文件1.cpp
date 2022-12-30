#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main( )
{
	double income=123.45, expense=987.65;
	int week=7, year=2005; //24
	ofstream outfile("prog.txt");
	if (!outfile) 
	{
		cerr << "File could not be open" << endl; exit(1);
	}
	outfile << "Week=" << week << endl << "Year=" << year << endl;
	outfile << "Income=" << income << endl << "Expenses=" << expense << endl;
	outfile.close(); //26
}
