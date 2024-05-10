#include <iostream>
#include <iomanip>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d);
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
    void setDate(int y, int m, int d);
    void print();
    void addOneDay();
};
Date::Date(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void Date::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void Date::print()
{
    cout << year << "/" << setw(2) << setfill('0') << month
         << "/" << setw(2) << setfill('0') << day << endl;
}

void Date::addOneDay()
{
    int days0[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 平年的每月天数
    int days1[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 闰年的每月天数
    int *dp = days0;                                                     // 默认用平年的天数
    if (month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
    {
        dp = days1;
    } // 使用闰年的天数

    day++;
    if (day > dp[month])
    {
        day = day - dp[month];
        month++;
    }
    if (month > 12)
    {
        month = month - 12;
        year++;
    }
}

int main()
{
    int t;
    int y, m, d;
    cin >> t;
    while (t--)
    {
        cin >> y >> m >> d;
        Date a(y, m, d);
        cout << "Today is ";
        a.print();
        a.addOneDay();
        cout << "Tomorrow is ";
        a.print();
    }
    return 0;
}