#include <iostream>
using namespace std;

/*
    类的定义示例
*/

// 程序2-1 定义日期类
class myDate
{
public:
    myDate();                    // 构造函数，类的构造函数与函数名与类名相同
    myDate(int, int, int);       // 构造函数
    void setDate(int, int, int); // 可以只定义形参的类型，不定义名称
    void setDate(myDate);        // 重载函数
    myDate getDate();
    void setYear(int);
    int getMonth();
    void printDate() const;

private:
    int year, month, day;
};

// 在类体外定义成员函数
myDate::myDate()
{
    year = 1970, month = 1, day = 1;
}
myDate::myDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void myDate::setDate(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
    return;
}
void myDate::setDate(myDate oneD)
{
    year = oneD.year;
    month = oneD.month;
    day = oneD.day;
    return;
}
myDate myDate::getDate()
{
    return *this;
}
void myDate::setYear(int y)
{
    year = y;
    return;
}
int myDate::getMonth()
{
    return month;
}
void myDate::printDate() const
{
    cout << year << "/" << month << "/" << day;
    return;
}

/*
    需要说明一下，类成员变量的类型不能是本类类型。也就是说，类C中不能定义类C的成员变量，但可以定义类C的指针和引用。
*/

// 程序2-2 定义一个学生类
class Student
{
public:
    void setStudent(string, myDate);
    void setName(string);
    string getName();
    void setBirthDay(myDate);
    myDate getBirthday();
    void printStudent() const;

private:
    string name;
    myDate birthday;
};

// 定义Student成员函数
void Student::setStudent(string s, myDate d)
{
    name = s;
    birthday.setDate(d);
    return;
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

int main()
{
    // Student s1;
    // int y, m, d;
    // string name_;
    // cout<<"请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    // cin>>name_>>y>>m>>d;
    // s1.setStudent(name_, myDate(y, m, d));
    // s1.printStudent();

    /*使用指针访问对象的成员*/
    /**
     * s2访问成员时，使用点操作符，即s2.成员名
     * 通过指针访问成员时，使用指针操作符，即sp->成员名
     */
    Student s2;
    int y, m, d;
    string name_;
    Student *sp = &s2; // 指向s2的指针sp
    cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    cin >> name_ >> y >> m >> d;
    sp->setStudent(name_, myDate(y, m, d));
    sp->printStudent();

    /*使用引用访问对象的成员*/
    Student s3;
    int y3, m3, d3;
    string name3_;
    Student &sy = s3;
    cout << "请输入学生3的姓名和生日，生日以\"年 月 日\"的次序输入：";
    cin >> name_ >> y >> m >> d;
    sy.setStudent(name_, myDate(y, m, d));
    sy.printStudent();
    return 0;
}