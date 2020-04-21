#ifndef __PROGRAM1_8_H__
#define __PROGRAM1_8_H__
#include "code.h"
class program1_8 : public mainbase
{
public:
	program1_8() {}
	~program1_8() {}
	virtual int publicInterface(void);
private:
	int squareByValue(int);
	void squareByReference(int&);
};
#endif // !__PROGRAM1_4_H__
