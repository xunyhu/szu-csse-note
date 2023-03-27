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
 */
class CB1
{
public:
    int a;
    CB1(int x)
    {
        a = x;
    }
    void showa()
    {
        cout<<"Class CB1 ==> a = "<<a<<endl;
    }
};
class CB2
{
public:
    int a;
    CB2(int x)
    {
        a = x;
    }
    void showa()
    {
        cout<<"Class CB2 ==> a = "<<a<<endl;
    }
};

class CD : public CB1, public CB2
{
public:
    int a;
    CD(int x, int y, int z):CB1(x),CB2(y)
    {
        a = z;
    }
    void showa()
    {
        cout<<"Class CD ==> a = "<<a<<endl;
    }
    void print3a()
    {
        cout<<"a="<<a<<endl;
        cout<<"CB1::a="<<CB1::a<<endl;
        cout<<"CB2::a="<<CB2::a<<endl;
    }
};

int main()
{
    CB1 CB1obj(11);
    CB1obj.showa();
    CD CDobj(101, 202, 303);
    CDobj.showa();
    CDobj.CB1::showa();
    cout<<"CDobj.a="<<CDobj.a<<endl;
    cout<<"CDobj.CB2::a="<<CDobj.CB2::a<<endl;
    return 0;
}