#ifndef __CODE_H__
#define __CODE_H__
enum subclass
{
    program1_4e,
    program1_5e,
    program1_7e,
    program1_8e
};
class mainbase {
public:
    virtual int publicInterface(void) = 0;
};
#endif // !__CODE_H__