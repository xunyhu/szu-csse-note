#include <iostream>
using namespace std;

/*

指针  
指针是一种特殊的数据类型，它保存的数值是另一个变量的内存地址。  
指针与引用不同，它本身是占用内存空间。
```cpp
int i=3, j=6, k=9;
int *i_pointer = &i;
int &r_i = i;
*i_pointer=300;
i_pointer=&j;

//指针操作使用*和&运算符
int i=3, j=6, k=9;
int *i_p=&i; 	//定义指针i_p，并且指针指向变量i
*i_p=300;	//*在=左边，表示间接访问，表示通过i_p的指向找到变量i,然后赋值300 	
i_p=&j; 	//i_p指向修改为指向变量j
int *iy; 	//定义指针iy，目前无指向，注意*这里表示指针类型，没有赋值 
iy=&k;	//&表示地址运算符，这时候表示iy指向变量k
int &r_y=k; //与上一句相比，&在这里表示引用类型，不是地址运算符
```
引用   
引用不是一个新的变量，是变量或对象的别名，它自身没有分配新的内存。引用的声明需要用到引用运算符“&”，其一般形式： 类型  &变量＝变量;

*/

/*
    类的定义示例

    声明对象引用：  类名 &对象引用名 = 对象
    声明对象指针：  类名 *对象指针名 = 对象的地址
    声明对象数组：  类型 对象数组名[数组大小]

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