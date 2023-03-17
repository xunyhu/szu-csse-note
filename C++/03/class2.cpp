#include <iostream>
using namespace std;

/**
 * 析构函数 P105
 * 与构造函数一样，析构函数也是成员的一种，它的名字也与类名相同，但要在类名前面加一个“~”字符以区别构造函数。
 * 析构函数没有参数，也没有返回值。一个类中有且仅有一个析构函数，默认析构函数的函数体为空。
 * 对象创建时自动调用构造函数，对象消亡时自动调用析构函数。
 * 析构函数用于做一些善后工作，例如：在创建对象时使用new运算符动态分配了内存空间，则在析构函数中应该使用delete释放这部分占用的空间。
 * ** 析构函数的调用执行顺序与构造函数刚好相反 **
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
    // 例3-19 对象数组与delete语句
    //  Student *ss = new Student[2];
    //  delete []ss; //使用delete释放动态数组时，通过“[]”告诉编译器是数组

    // 例3-20 对象指针数组与delete
    //  Student *ss[2] = {new Student(), new Student()};
    //  delete ss[0];
    //  delete ss[1];

    Samp *p;
    p = new Samp[5];
    if (!p)
    {
        cout << "内存分配错误\n";
        return 1;
    }
    for (int j = 0; j < 5; j++)
        p[j].Setij(j, j);
    for (int k = 0; k < 5; k++)
    {
        cout << "Muti[" << k << "] 值是：" << p[k].GetMuti() << endl;
    }
    delete []p;
    return 0;
};