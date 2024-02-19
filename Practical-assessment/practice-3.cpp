/**
 *
 *
    题目描述

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
*/

#include <iostream>
#include <string>
using namespace std;

// 日期类
class myDate
{
private:
    int year;
    int month;
    int day;

public:
    myDate()
    {
        year = 1970;
        month = 1;
        day = 1;
    }

    myDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    void set(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    void printDate()
    {
        cout << year << "/" << month << "/" << day;
    }
};

// 学生类
class Student
{
private:
    string name;
    myDate birthday;

public:
    void set(string n, myDate d)
    {
        name = n;
        birthday = d;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }

    void setBirthday(myDate d)
    {
        birthday = d;
    }

    myDate getBirthday()
    {
        return birthday;
    }

    void printStudent()
    {
        cout << name << endl;
        birthday.printDate();
        cout << endl;
    }
};

int main()
{
    string name;
    int y, m, d;

    // 创建学生对象ss
    Student ss;

    // 输入姓名和出生年月日
    cin >> name >> y >> m >> d;
    myDate birthday(y, m, d);
    ss.set(name, birthday);

    // 打印学生信息
    ss.printStudent();

    // 输入要修改的出生日期
    cin >> y >> m >> d;
    birthday.set(y, m, d);
    ss.setBirthday(birthday);

    // 打印修改生日后的学生信息
    ss.printStudent();

    // 输入要修改的姓名
    cin >> name;
    ss.setName(name);

    // 打印修改姓名后的学生信息
    ss.printStudent();

    return 0;
}