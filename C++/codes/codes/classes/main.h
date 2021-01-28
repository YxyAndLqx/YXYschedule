#ifndef MAIN_H
#define MAIN_H
#include <string>
class mainClass {
private:
	int* nDatas;
	float* fDatas;
	long* lDatas;
	double* dDatas;

public:
	int input(char*) = 0;
	int run() = 0;
	string output() = 0;
};
#endif
