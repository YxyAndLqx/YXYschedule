#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "../include/program1_5.h"
using namespace std;
int program1_5::publicInterface()
{
	ifstream inFile;
	ofstream outFlie;
	outFlie.open("..//iofiles//out.txt", ios::out);
	char univ[] = "Tsinghua", name[10];
	int course = 2401, number;
	outFlie << univ << endl;
	outFlie << course << endl;
	inFile.open("..//iofiles//out.txt", ios::in | ios::_Nocreate);
	if (!inFile) {
		cerr << "不能打开 iofiles\out.txt" << endl;
		return 1;
	}
	char c;
	inFile >> name >> c >> number;
	outFlie << "name: " << name << endl;
	outFlie << "number: " << number << endl;
	return 0;
}