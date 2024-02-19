/*
题目2.设置日期

定义日期类，实现日期设置功能
日期类包含私有数据成员：年、月、日，都是int类型
日期类实现功能包括
1）无参构造和有参构造，其中无参构造设置默认日期为1970年1月1日，有参构造包含年月日三个参数
2）set方法，修改年月日
3）修改年份，只修改年份数值，月和日不变
4）打印函数，输出年月日信息，格式参考样例

主函数创建四个日期对象，要求完成以下设置：
1）第一个日期对象采用默认日期
2）第二个日期对象根据输入数据，通过构造函数设置输入的年月日
3）第三个日期对象先采用默认日期，然后输入数据，再调用set方法修改年月日
4）第四个日期对象先采用默认日期，然后输入新的年份，再调用修改年份的方法修改，但是月日不变

每个对象在设置后都调用打印函数做输出


输入：
第一行输入第二个日期对象的年月日，共三个整数
第二行输入第三个日期对象要修改的年月日，共三个整数
第三行输入第四个日期对象要修改的年份，一个整数

输出
共输出四行，每行输出一个日期对象在设置后的年月日

样例输入
2021 1 2
2022 3 4
2023


样例输出
1970/1/1
2021/1/2
2022/3/4
2023/1/1


后台输入
1900 9 10
2000 3 4
2100

后台输出
1970/1/1
1900/9/10
2000/3/4
2100/1/1

*/

#include <iostream>
using namespace std;

class myDate
{
public:
	myDate();
	myDate(int, int, int);
	void setDate(int, int, int);
	void setDate(myDate);
	void setYear(int);
	void printDate();

private:
	int year, month, day;
};
myDate::myDate()
{
	year = 1970, month = 1, day = 1;
}
myDate::myDate(int y, int m, int d)
{
	year = y, month = m, day = d;
}
void myDate::setDate(int y, int m, int d)
{
	year = y, month = m, day = d;
}
void myDate::setDate(myDate oneD)
{
	year = oneD.year, month = oneD.month, day = oneD.day;
}
void myDate::setYear(int y)
{
	year = y;
}
void myDate::printDate()
{
	cout << year << "/" << month << "/" << day << endl;
}

int main()
{
	int y, m, d;

	myDate md1;
	md1.printDate(); // 输出默认日期1970/1/1

	cin >> y >> m >> d;
	myDate md2(y, m, d); // md2日期为y/m/d
	md2.printDate();	 // 输出日期y/m/d

	myDate md3; // md3默认为1970/1/1
	cin >> y >> m >> d;
	md3.setDate(y, m, d); // md3修改日期为y/m/d
	md3.printDate();	  // 输出修改后的日期y/m/d

	myDate md4;		 // md3默认为1970/1/1
	cin >> y;		 // 输入新的年份
	md4.setYear(y);	 // 修改新的年份，但是月日不变
	md4.printDate(); // 输出修改年份后的日期y/1/1

	return 0;
}
