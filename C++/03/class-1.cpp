#include <iostream>
using namespace std;

/**
 * 第三节 类的静态成员 P108
 */
class myDate
{
public:
    myDate();
    myDate(int, int, int);
    myDate(int);
    void setDate(int, int, int); // 可以只定义形参的类型，不定义名称
    void setDate(myDate);        // 重载函数
    myDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;
    ~myDate()
    {
        cout << "myDate-析构函数" << endl;
    }

private:
    int year, month, day;
};
myDate::myDate() : year(2023), month(03), day(16)
{
    cout << "myDate构造函数" << endl;
}
myDate::myDate(int y, int m, int d) : year(y), month(m), day(d) {}
myDate::myDate(int y) : year(y) {}
void myDate::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void myDate::setDate(myDate d)
{
    year = d.year;
    month = d.month;
    day = d.day;
}
void myDate::printDate() const
{
    cout << year << '-' << month << '-' << day << endl;
};

class Student
{
public:
    void setStudent(string, myDate);
    void setName(string);
    string getName();
    void setBirthDay(myDate);
    myDate getBirthday();
    void printStudent() const;
    Student();                 // 构造函数
    Student(string);           // 构造函数，带一个参数
    Student(const Student &s); // 声明复制构造函数原型
    ~Student();

private:
    string name;
    myDate birthday;
};
Student::Student() : name("empty"), birthday(myDate())
{
    cout << "Student构造函数" << endl;
}
Student::~Student()
{
    cout << "Student-析构函数" << endl;
}
Student::Student(string n) : name(n), birthday(myDate()) {}
void Student::setStudent(string s, myDate d)
{
    name = s;
    birthday.setDate(d);
}
void Student::setName(string n)
{
    name = n;
    return;
}
void Student::setBirthDay(myDate d)
{
    birthday.setDate(d);
    return;
}
string Student::getName()
{
    return name;
}
myDate Student::getBirthday()
{
    return birthday;
}
void Student::printStudent() const
{
    cout << "姓名：" << name << "\t 生日：";
    birthday.printDate(); // 调用类myDate的成员函数
    cout << endl;
}
Student::Student(const Student &s)
{
    name = "COPY" + s.name;
    birthday = s.birthday;
}

class Samp
{
protected:
    int i, j;

public:
    void Setij(int a, int b)
    {
        i = a;
        j = b;
    }
    ~Samp()
    {
        cout << "析构.." << i << endl;
    }
    int GetMuti()
    {
        return i * j;
    }
};

int main()
{
    
    return 0;
};