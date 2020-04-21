// code.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "include/icsub.h"

int main()
{
    mainbase* inter;
    int n;
    std::cout << "program1_4:0\nprogram1_5:1\nprogram1_7:2\nprogram1_8:3\n";
    std::cout << "enter the number:\n";
    std::cin >> n;
    switch (n)
    {
    case program1_4e:
        inter = new program1_4();
        break;
    case program1_5e:
        inter = new program1_5();
        break;
    case program1_7e:
        inter = new program1_7();
        break;
    case program1_8e:
        inter = new program1_8();
        break;
    default:
        return 0;
    }
    inter->publicInterface();
    delete inter;
    return 0;
}
