// codes.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void printMyName(void);
void printLong(void);
int main()
{
    int tag = 1;
    int num;
    while (tag) {
        cout << "please enter a number:" << endl;
        cout << "   1:void printMyName(void)\n"
             << "   2:void printLong(void)\n"
             << "   0:quit.\n"
             << ">";
        cin >> num;
        switch (num)
        {
        case 1 :
            printMyName();
            break;
        case 2:
            printLong();
            break;
        default:
            tag = 0;
            break;
        }
    }
}
void printMyName(void) {
    std::cout << "杨星煜 " << "成都合院" << std::endl;
}

void printLong(void) {
    int destance;
    cout << "please enter a number(long)\n";
    cin >> destance;
    cout << destance * 220 << "mark" << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
