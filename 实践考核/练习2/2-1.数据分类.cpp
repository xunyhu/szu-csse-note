/*
题目1.数据分类

把一行输入的数据，根据数据类型分成多行输出


输入
在一行中依次输入两个整数、一个字母、一个字符串、一个浮点数

输出
根据数据类型分别输出数据，共输出四行
第一行输出是字符串
第二行输出是整数数据，数据之间用空格隔开
第三行输出是字母
第四行输出是浮点数

样例输入
10 20 g abc 25.5

样例输出
abc
10 20
g
25.5

后台输入
11 22 A XYZ 33.3

后台输出
XYZ
11 22
A
33.3

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int oneInt1, oneInt2;
	string str;
	double oneDouble;
	char oneChar = 'a';
	cin >> oneInt1 >> oneInt2 >> oneChar >> str >> oneDouble;
	cout << str << endl
		 << oneInt1 << " " << oneInt2 << endl
		 << oneChar << endl
		 << oneDouble << endl;

	return 0;
}