#include <iostream>
using namespace std;

//定义日期类
class myDate
{
    public:
        myDate(); //构造函数
        myDate(int, int, int); //构造函数
        void setDate(int, int, int);
        void setDate(myDate);
        myDate getDate();
        void setYear(int);
        int getMonth();
        void printDate() const;
    private:
        int year, month, day;
};

class Student
{
private:
    /* data */
public:
    // void setStudent(string, myDate);
};

Student::Student(/* args */)
{
}

Student::~Student()
{
}
