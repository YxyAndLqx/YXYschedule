#ifndef __PROGRAM1_7__
#define __PROGRAM1_7__
#include "code.h"
class program1_7 : public mainbase
{
public:
	program1_7(){}
	~program1_7(){}
	virtual int publicInterface(void);
private:
	char& replace(int m);
	char s[80] = "hello world";
};
#endif // !__PROGRAM1_7__
