/**
 *
 *
    题目描述

    把一行输入的数据，根据数据类型分成多行输出

    输入

    在一行中依次输入两个整数、一个字母、一个字符串、一个浮点数

    输出

    根据数据类型分别输出数据，共输出四行
    第一行输出是字符串
    第二行输出是整数数据，数据之间用空格隔开
    第三行输出是字母
    第四行输出是浮点数
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1, num2;
    char letter;
    string str;
    float floatNum;

    cin >> num1 >> num2 >> letter >> str >> floatNum;

    cout << str << endl;
    cout << num1 << " " << num2 << endl;
    cout << letter << endl;
    cout << floatNum << endl;

    return 0;
}
