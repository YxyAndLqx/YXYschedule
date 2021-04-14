// codes.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void printMyName(void);
void printLong(void);
void printFourWords(void);
void printFourWords_1(void);
void printFourWords_2(void);
void howOldAreYou(void);
void celsiusToFahrenheit(void);
void howLongIsOneLightYear(void);
void whatTimeIsIt(void);
void quickSortProsser(void);
int main()
{
    int tag = 1;
    int num;
    while (tag) {
        cout << "please enter a number:" << endl;
        cout << "   1:void printMyName(void)\n"
             << "   2:void printLong(void)\n"
             << "   3:void printFourWords(void)\n"
             << "   4:void howOldAreYou(void)\n"
             << "   5:void celsiusToFahrenheit(void)\n"
             << "   6:void howLongIsOneLightYear(void)\n"
             << "   7:void whatTimeIsIt(void)\n"
             << "   8:quickSortProsser(void)\n"
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
        case 3:
            printFourWords();
            break;
        case 4:
            howOldAreYou();
            break;
        case 5:
            celsiusToFahrenheit();
            break;
        case 6:
            howLongIsOneLightYear();
            break;
        case 7:
            whatTimeIsIt();
            break;
        case 8:
            quickSortProsser();
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

void printFourWords(void) {
    printFourWords_1();
    printFourWords_1();
    printFourWords_2();
    printFourWords_2();
}
void printFourWords_1(void) {
    cout << "Three blind mice\n";
}
void printFourWords_2(void) {
    cout << "See how they run\n";
}

void howOldAreYou(void) {
    int years;
    cout << "Enter your age:";
    cin >> years;
    cout << years * 12 << endl;
}
void celsiusToFahrenheit(void) {
    float celsius = 0;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    cout << celsius << " degree Celsius is " << 1.8 * celsius + 32.0 << " degree Fahrenheit\n";
}
void howLongIsOneLightYear(void) {
    double lightYear = 0;
    cout << "Enter the number of light years:";
    cin >> lightYear;
    cout << lightYear << " light years = " << lightYear * 63240 << " astronomical units.\n";
}
void whatTimeIsIt(void) {
    int hours, minutes;
    cout << "Enter the number of hours:";
    cin >> hours;
    cout << "Enter the number of minutes:";
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes << endl;
}
void quickSort(int arr[100], int begin, int end) {
    int i = begin, j = end;
    int temp;
    temp = arr[i];
    if (begin < end) {
        while (i < j) {
            while (arr[j] >= temp && i < j) {
                j--;
            }
            arr[i] = arr[j];
            while (arr[i] <= temp && i < j) {
                i++;
            }
            arr[j] = arr[i];
        }
        arr[i] = temp;
        quickSort(arr, begin, i - 1);
        quickSort(arr, i+1, end);
    }
    else {
        return;
    }
}

void quickSortProsser(void) {
    cout << "enter an array (data separate with space) :" << endl;
    int num, arr[100];
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, num - 1);

    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
