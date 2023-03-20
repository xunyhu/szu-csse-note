#include <iostream>
using namespace std;

/**
 * 第七节 友元函数
 * 
 *  友元函数
    格式：friend 返回值类型 函数名(参数表) || friend 返回值 类A::类A的成员函数名(参数表)
    友元类
    如果将一个类B说明为另一个类A的友元类，则类B中的所有函数都是类A的友元函数，在类B的所有成员函数中都可以访问类A中的所有成员。
    格式： friend class 类名
 */

//友元类示例
class myComplex
{
    private:
        double real, imag;
    public:
        myComplex();
        myComplex(double r, double i);
        friend class oper;    //友元类
};
myComplex::myComplex()
{
    real = 0;
    imag = 0;
}
myComplex::myComplex(double r, double i)
{
    real = r;
    imag = i;
}

class oper
{
    public:
        myComplex addCom(myComplex c1, myComplex c2);
        void outCom(myComplex c);
};
myComplex oper::addCom(myComplex c1, myComplex c2)
{
    return myComplex(c1.real + c2.real, c1.imag + c2.imag);
}
void oper::outCom(myComplex c)
{
    cout<<"("<<c.real<<","<<c.imag<<")";
}

int main()
{
    myComplex c1(1, 2), c2(3, 4), res;
    oper o;
    res = o.addCom(c1, c2); //通过类oper的对象调用操作类的成员函数
    o.outCom(c1);
    cout<<"+";
    o.outCom(c2);
    cout<<"=";
    o.outCom(res);
    cout<<endl;
    return 0;
};