#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
/**
 * 多重继承
 *
 * C++允许从多个类派生一个类，即一个派生类可以同时有多个基类。这称为多重继承。
 * 格式：
 *      class 派生类名 ： 继承方式说明符 基类名 1，继承方式说明符 基类名 2，...
 *      {
 *          类体
 *      }；
 *
 * 多重继承时，如果多个基类中有重名的成员，则它们都被继承到派生类中。在这种情况下，访问重名成员时会遇到二义性问题。
 *
 * 如果派生类中新增了同名成员，则派生类成员将隐藏所有基类的同名成员。使用“派生类对象名.成员类”或“派生类对象指针->成员名”的方式可以唯一标识和访问派生类新增成员。这种情况下，不会产生二义性。
 *
 * 如果派生类中没有新增同名成员，当满足访问权限时，使用“派生类对象名.成员类”或“派生类对象指针->成员名”的方式时，系统无法判断到底是调用哪个基类的成员，从而产生二义性。
 * 为了避免二义性，必须通过基类名和作用域分辨符来标识成员。
 */
class BaseClass1
{
public:
    int v1, v2;
    BaseClass1();
    BaseClass1(int, int);
    ~BaseClass1();
};
BaseClass1::BaseClass1()
{
    cout << "BaseClass1 无参构造函数" << endl;
}
BaseClass1::BaseClass1(int m, int n) : v1(m), v2(n)
{
    cout << "BaseClass1 带2个参数构造函数" << endl;
}
BaseClass1::~BaseClass1()
{
    cout << "BaseClass1 析构函数" << endl;
}

class BaseClass2
{
public:
    int v1, v4;
    BaseClass2();
    BaseClass2(int, int);
    ~BaseClass2();
};
BaseClass2::BaseClass2()
{
    cout << "BaseClass2 无参构造函数" << endl;
}
BaseClass2::BaseClass2(int m, int n) : v1(m), v4(n)
{
    cout << "BaseClass2 带2个参数构造函数" << endl;
}
BaseClass2::~BaseClass2()
{
    cout << "BaseClass2 析构函数" << endl;
}

class DerivedClass : public BaseClass1, public BaseClass2
{
public:
    int v3;

public:
    DerivedClass();
    DerivedClass(int);
    DerivedClass(int, int, int, int);
    ~DerivedClass();
};
DerivedClass::DerivedClass()
{
    cout << "DerivedClass 无参构造函数" << endl;
}
DerivedClass::DerivedClass(int k) : v3(k)
{
    cout << "DerivedClass 带1个参数构造函数" << endl;
}
DerivedClass::DerivedClass(int m, int n, int k, int t) : BaseClass1(m, n), BaseClass2(m, t), v3(k)
{
    cout << "DerivedClass 带4个参数构造函数" << endl;
}
DerivedClass::~DerivedClass()
{
    cout << "DerivedClass 析构函数" << endl;
}
int main()
{
    cout<<"带参数对象的创建"<<endl;
    DerivedClass derivedCla1(100, 200, 300, 400);
    cout<<"v1="<<derivedCla1.BaseClass1::v1<<endl;
    cout<<"v2="<<derivedCla1.v2<<endl;
    cout<<"v1="<<derivedCla1.BaseClass2::v1<<endl; //二义性是多重继承天生的问题。解决办法是，当要访问派生类对象中的某个变量时，添加“基类::”作为前缀，指明需要访问从哪个基类继承来的，从而可以排除二义性。
    cout<<"v4="<<derivedCla1.v4<<endl;
    cout<<"v3="<<derivedCla1.v3<<endl;
    return 0;
}