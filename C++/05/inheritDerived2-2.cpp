#include <iostream>
#include <string>
using namespace std;

/*
    类的继承与派生
    第二节  访问控制
    2. 类型兼容规则
        类型兼容规则是指在需要基类对象的任何地方，都可以使用公有派生类的对象来替代，也称为赋值兼容规则。
        凡是基类能解决的问题，公有派生类都可以解决。
        3条类型兼容规则：
            1. 派生类的对象可以赋值给基类对象
            2. 派生类的对象可以用来初始化基类引用
            3. 派生类对象的地址可以赋值给基类指针，即派生类的指针可以赋值给基类的指针。
            上述3条规则反过来是不成立的。不能把基类对象赋值给派生类对象。
    3. 私有继承
*/

class A
{
    int an;

public:
    A() {}
    A(int n)
    {
        an = n;
    }
    void print()
    {
        cout << "A的对象：";
        cout << "an: " << an;
    }
    void print(int k) // 不同的输出格式
    {
        cout << "an: " << an;
    }
};

class B : public A
{
    int bn;

public:
    B(int n) : A(2 * n)
    {
        bn = n;
    }
    void print()
    {
        cout << "\nB的对象：";
        A::print();
        cout << ",bn=" << bn << endl;
    }
};

int main()
{
    A a(10);
    B b(20);
    a.print();
    b.print();
    a = b;
    a.print();
    b.print();
    A &r = b;
    r.print();
    A *pa = &b;
    pa->print();
    B *pb = &b;
    pb->print();
    pa = pb;
    pa->print();
    return 0;
}