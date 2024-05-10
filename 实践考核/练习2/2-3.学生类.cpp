/*
题目3.学生类
定义学生类Student，包含私有数据成员：姓名和生日，姓名是字符串类型，生日是日期类型，用之前的myDate类定义
公有函数包括
1）set方法，两个参数是姓名和生日，参数1是string类型，参数2是myDate类型
2）姓名的get和set方法
3）生日的get和set方法，其中set方法的参数是一个myDate对象
4）打印函数，输出学生信息，格式参考样例

主函数创建一个学生对象，完成以下操作：
1）创建一个学生对象ss
2）输入姓名和出生年月日，对象ss使用set方法设置姓名和生日，并调用打印函数输出学生信息
3）输入新的出生年月日，对象ss使用生日的set方法修改生日，并调用打印函数输出修改后的信息
4）输入新的姓名，对象ss使用姓名的set方法修改姓名，并调用打印函数输出修改后的信息


输入
第一行输入姓名和出生年月日，共四个参数
第二行输入三个参数，表示要修改的出生日期
第三行输入一个参数，表示要修改的姓名

输出
第一行输出创建学生对象的信息
第二行输出修改生日后的学生信息
第三行输出修改姓名后的学生信息


样例输入
tom 2000 2 2
2001 11 11
kim


样例输出
tom 2000/2/2
tom 2001/11/11
kim 2001/11/11

后台输入
kate 2010 12 22
2011 11 9
sue

后台输出
kate 2010/12/22
kate 2011/11/9
sue 2011/11/9

*/

#include <iostream>
#include <string>
using namespace std;

class myDate
{
public:
	myDate()
	{
		year = 1970, month = 1, day = 1;
	}
	myDate(int y, int m, int d)
	{
		year = y, month = m, day = d;
	}
	void setDate(int y, int m, int d)
	{
		year = y, month = m, day = d;
		return;
	}
	void setDate(myDate oneD)
	{
		year = oneD.year, month = oneD.month, day = oneD.day;
	}
	void setYear(int y)
	{
		year = y;
		return;
	}
	void printDate()
	{
		cout << year << "/" << month << "/" << day << endl;
		return;
	}

private:
	int year, month, day;
};

class Student
{
private:
	string sname;
	myDate birthday;

public:
	void setStudent(string s, myDate d)
	{
		sname = s;
		birthday.setDate(d);
	}
	void setName(string n)
	{
		sname = n;
	}
	void setBirthday(myDate d)
	{
		birthday = d;
	}
	void printStudent()
	{
		cout << sname << " ";
		birthday.printDate();
	}
};

int main()
{
	Student ss;
	int y, m, d;
	string n;

	cin >> n >> y >> m >> d;
	myDate m1(y, m, d);
	ss.setStudent(n, m1);
	ss.printStudent();

	cin >> y >> m >> d;
	myDate m2(y, m, d);
	ss.setBirthday(m2);
	ss.printStudent();

	cin >> n;
	ss.setName(n);
	ss.printStudent();

	return 0;
}