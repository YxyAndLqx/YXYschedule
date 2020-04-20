#include <iostream>
using namespace std;
char& replace(int m);
char s[80] = "hello world";
void main7()
{
	replace(4) = 'x';
	cout << s;
}

char& replace(int m)
{
	return s[m];
}