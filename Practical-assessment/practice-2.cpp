/**
 *
 *
    题目描述

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

    输入

    第一行输入第二个日期对象的年月日，共三个整数
    第二行输入第三个日期对象要修改的年月日，共三个整数
    第三行输入第四个日期对象要修改的年份，一个整数

    输出

    共输出四行，每行输出一个日期对象在设置后的年月日
*/

#include <iostream>
using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;

public:
    // 无参构造函数
    Date()
    {
        year = 1970;
        month = 1;
        day = 1;
    }

    // 有参构造函数
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    // 修改日期
    void set(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    void set(Date oneD)
    {
        year = oneD.year, month = oneD.month, day = oneD.day;
    }

    // 修改年份
    void modifyYear(int y)
    {
        year = y;
    }

    // 打印日期
    void printDate()
    {
        cout << year << "/" << month << "/" << day << endl;
    }
};

int main()
{
    int y, m, d;

    // 第一个日期对象采用默认日期
    Date date1;
    date1.printDate();

    // 第二个日期对象根据输入数据，通过构造函数设置输入的年月日
    cin >> y >> m >> d;
    Date date2(y, m, d);
    date2.printDate();

    // 第三个日期对象先采用默认日期，然后输入数据，再调用set方法修改年月日
    Date date3;
    date3.printDate();
    cin >> y >> m >> d;
    date3.set(y, m, d);
    date3.printDate();

    // 第四个日期对象先采用默认日期，然后输入新的年份，再调用修改年份的方法修改，但是月日不变
    Date date4;
    date4.printDate();
    int newYear;
    cin >> newYear;
    date4.modifyYear(newYear);
    date4.printDate();

    return 0;
}
