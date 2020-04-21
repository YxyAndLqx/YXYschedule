#include <iostream>
#include "../include/progtam1_8.h"
using namespace std;

int program1_8::publicInterface(void)
{
	int x = 2, z = 4;
	cout << "求平方值前 x = " << x << endl << "用squareByValue求平方值"
		<< squareByValue(x) << endl << "求平方值后 x = " << x << endl;
	//求平方值前x=2，squareByValue（x）= 4 求平方值之后x=2
	cout << "求平方值前z = " << z << endl << "用squareByReference求平方" << endl;
	squareByReference(z);
	cout << "求平方值后 z = " << z << endl;
	//求平方值前z=4，求平方值后z=16；
	return 0;
}

int program1_8::squareByValue(int a) { return a *= a; }
void program1_8::squareByReference(int& a) { a *= a; }