/*
1-1 食品管理

题目描述
定义一个食品类Food，含数据成员：编号(int)、单价(float)、品牌(字符串)，成员函数：
1）有参构造，初始化数据成员，并输出构造信息。
2）输出函数print，输出食品信息。
3）析构函数，输出析构信息

要求：
1、必须用C++和类对象编程，否则0分
2、主函数中要使用相应的对象、或对象指针、或对象引用来完成要求

输入
第一行输入t，表示t种食品
接着输入t行，每行输入3个参数，分别表示编号、单价、品牌

输出
每个实例输出三行，包含一行构造输出、一行调用print函数输出，一行析构输出
输出具体看示例

样例输入
2
1001 2.3 yida
2002 4.5 xufuji

样例输出
Food 1001 construct
yida unit price is 2.3
Food 1001 destruct
Food 2002 construct
xufuji unit price is 4.5
Food 2002 destruct

后台输入
1
3003 6.7 defu

后台输出
Food 3003 construct
defu unit price is 6.7
Food 3003 destruct

*/
#include <iostream>
#include <string>
using namespace std;

class Food
{
private:
	int ID;
	float price;
	string sname;

public:
	Food(int ti, float tp, string ts)
	{
		ID = ti;
		price = tp;
		sname = ts;
		cout << "Food " << ID << " construct" << endl;
	}
	~Food()
	{
		cout << "Food " << ID << " destruct" << endl;
	}
	void print()
	{
		cout << sname << " unit price is " << price << endl;
	}
};

int main()
{
	int t, ti;
	float tp;
	string ts;
	cin >> t;
	while (t--)
	{
		cin >> ti >> tp >> ts;
		Food ff(ti, tp, ts);
		ff.print();
	}
	return 0;
}
