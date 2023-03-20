#include <iostream>
#include <cmath>
using namespace std;

/**
 * 第八节 this指针
 *
 * 对于非静态成员函数，系统传递给它的形参个数比程序员写的多一个。多出来的参数就是this指针，这个this指针指向成员函数作用的对象。
 * 静态成员具有普通函数的形式，但是静态成员是类具有的属性，不是对象的特征，this表示的是隐藏的对象的指针，所以静态成员函数没有this指针。
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

//year = year 这样的语句，赋值左右变量名一样，但是不是同一个变量。编译时不会出问题，但是运行结果不正确
// myDate::myDate(int year, int month, int day)
// {
//     year = year;
//     month = month;
//     day = day;
// }

myDate::myDate(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}

void myDate::printDate() const
{
    cout << year << '-' << month << '-' << day << endl;
};

//this指针的使用
class myComplex
{
public:
    double real, imag;
    myComplex():real(0),imag(0){}
    myComplex(double, double);
    myComplex AddRealOne();
    myComplex AddImagOne();
    void outCom();
};
myComplex::myComplex(double real, double imag)
{
    this->real = real;
    this->imag = imag;
}
myComplex myComplex::AddRealOne()
{
    this->real++;
    return *this; //返回对象本身
}
myComplex myComplex::AddImagOne()
{
    this->imag++;
    return *this; //返回对象本身
}
void myComplex::outCom()
{
    cout<<"("<<real<<","<<imag<<")";
}


int main()
{
    myDate d1(2023,03,20);
    d1.printDate();

    myComplex c1(1, 1), c2, c3;
    c1.outCom();
    c2.outCom();
    c3.outCom();
    cout<<endl<<"我是分割线"<<endl;
    c2 = c1.AddRealOne();
    c1.outCom();
    c3 = c1.AddImagOne();
    c2.outCom();
    c3.outCom();
    c1.outCom();
    cout<<endl;
    return 0;
}