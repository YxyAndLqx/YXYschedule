#include <iostream>
#include"../include/program1_7.h"
using namespace std;
int program1_7::publicInterface(void)
{
	replace(4) = 'x';
	cout << s;
	return 0;
}

char& program1_7::replace(int m)
{
	return s[m];
}