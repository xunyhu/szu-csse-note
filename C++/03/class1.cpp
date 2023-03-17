#include <iostream>
using namespace std;

/**
 * 构造函数 P91
 * 1、构造函数的作用
 * 2、构造函数的定义
 * 3、构造函数的使用
 * 4、复制构造函数与类型转换构造函数
 * 
 *  复制构造函数格式
 *      A::A(const A &) 或者  A::A(A &)
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

private:
    int year, month, day;
};

// 构造函数，类的构造函数与函数名与类名相同。若不定义，类会有一个默认的构造函数
//  myDate::myDate()
//  {
//      year = 2023;
//      month = 03;
//      day = 16;
//  };

myDate::myDate() : year(2023), month(03), day(16) {}

// 构造函数可以重载，定义参数
//  myDate::myDate(int y, int m, int d)
//  {
//      year = y;
//      month = m;
//      day = d;
//  };

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
    Student();       // 构造函数
    Student(string); // 构造函数，带一个参数
    Student(const Student &s); //声明复制构造函数原型

private:
    string name;
    myDate birthday;
};

Student::Student() : name("empty"), birthday(myDate()) {}
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
Student::Student(const Student &s) {
    name = "COPY" + s.name;
    birthday = s.birthday;
}

class CopyDemo
{
    int id;
public:
    CopyDemo(int i)
    {
        id = i;
        cout<<"id="<<id<<"构造函数"<<endl;
    }
    void printDemo();
    ~CopyDemo()
    {
        cout<<"id="<<id<<"析构函数"<<endl;
    }
};
void CopyDemo::printDemo()
{
    cout<<"id="<<id<<endl;
}

int main()
{
    myDate day1, day2(2023, 03, 02);
    // day1.printDate();
    // day2.printDate();

    // 例3-9 使用构造函数创建对象指针
    myDate *pd = new myDate();
    myDate *pd1 = new myDate(2022);
    myDate *pd2 = new myDate;
    // pd->printDate();
    // pd1->printDate();
    // pd2->printDate();

    Student stud;
    Student ss[2]; // 调用两次默认构造函数
    int y, m, d, i;
    string name_;
    // stud.printStudent();
    // for (i = 0; i < 2; i++)
    // {
    //     ss[i].printStudent();
    // }
    // for (i = 0; i < 2; i++)
    // {
    //     cout << "请输入学生的姓名和生日，生日以\"年 月 日\"的次序输入：";
    //     cin >> name_ >> y >> m >> d;
    //     ss[i].setStudent(name_, myDate(y, m, d));
    // }
    // for (i = 0; i < 2; i++)
    //     ss[i].printStudent();

    //例3-11 使用构造函数生成对象指针数组
    Student stud2;
    // stud2.printStudent();
    // stud2.setName("123");
    // stud2.printStudent();
    Student *spointer[2] = {new Student(), &stud2};
    Student sy[2] = {Student(), stud2};
    // for (int i = 0; i<2; i++)
    // spointer[i] -> printStudent();
    // for (int i=0; i<2; i++)
    //     sy[i].printStudent();
    // stud2.setName("345");
    // for (int i = 0; i<2; i++)
    //     spointer[i] -> printStudent();
    // spointer[1]->setName("333");
    // stud2.printStudent();
    // sy[1].printStudent();


    //例3-13 复制构造函数
    Student arr[2] = { stud2, Student()};
    stud2.printStudent();
    arr[0].printStudent();

    //类型转换构造函数的定义及使用
    CopyDemo d4(4);
    d4.printDemo();
    d4 = 6; //可以看作是将整形数6转换为Demo对象  6 执行了一边CopyDemo的构造函数
    d4.printDemo();

    return 0;
};