#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
/*
    如果基类有友元类或友元函数，则其派生类不会因继承关系而也有此友元类或友元函数。
    如果基类是某类的友元，则这种友元关系是被继承的。即被派生类继承过来的成员函数，如果原来是某类的友元函数，那么它作为派生类的成员函数仍然是某类的友元函数。
    总之，基类的友元不一定是派生类的友元；基类的成员函数是某类的友元函数，则其作为派生类继承的成员函数仍是某类的友元函数。

    除基类的构造函数和析构函数之外，派生类可以继承基类的全部成员变量和成员函数。
    构造函数和析构函数属于类的成员函数外。
    另外，派生类也不能继承基类的友元函数，虽然友元函数不是基类的成员函数。但基类中的成员函数是其他类的友元函数时，是可以被继承的。
*/

class CB
{
public:
    int a;
    CB(int x):a(x){};
    void showa()
    {
        cout<<"Class CB -- a ="<<a<<endl;
    }
};

class CD : public CB
{
public:
    int a;
    CD(int x, int y):CB(x)
    {
        a = y;
    }
    void showa()
    {
         cout<<"Class CD -- a ="<<a<<endl;
    }
    void print2a()
    {
        cout<<"a="<<a<<endl;
        cout<<"CB::a="<<CB::a<<endl;
    }
};

int main()
{
    CB CBobj(12);
    CBobj.showa();
    CD CDobj(48, 999);
    CDobj.showa();
    CDobj.CB::showa();
    CDobj.print2a();
    cout<<"CDobj.a="<<CDobj.a<<endl;
    cout<<"CDobj.CB::a="<<CDobj.CB::a<<endl;
    return 0;
}