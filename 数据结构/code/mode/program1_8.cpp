#include <iostream>
#include "../include/progtam1_8.h"
using namespace std;

int program1_8::publicInterface(void)
{
	int x = 2, z = 4;
	cout << "��ƽ��ֵǰ x = " << x << endl << "��squareByValue��ƽ��ֵ"
		<< squareByValue(x) << endl << "��ƽ��ֵ�� x = " << x << endl;
	//��ƽ��ֵǰx=2��squareByValue��x��= 4 ��ƽ��ֵ֮��x=2
	cout << "��ƽ��ֵǰz = " << z << endl << "��squareByReference��ƽ��" << endl;
	squareByReference(z);
	cout << "��ƽ��ֵ�� z = " << z << endl;
	//��ƽ��ֵǰz=4����ƽ��ֵ��z=16��
	return 0;
}

int program1_8::squareByValue(int a) { return a *= a; }
void program1_8::squareByReference(int& a) { a *= a; }