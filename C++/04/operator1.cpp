/**
 * 第一节 运算符重载的概念
 *
 * 格式：
 *  返回值类型 operator 运算符(形参表)
 *  {
 *      函数体
 *  }
 *
 * 运算符可以被重载为全局函数，也可以被重载为类的成员函数。
 */
#include <iostream>
using namespace std;

// 为类myComplex重载运算符“+”和“-”
class myComplex
{
private:
    double real, imag;

public:
    myComplex();
    myComplex(double r, double i);
    void coutCom();
    myComplex operator-(const myComplex &c);
    myComplex operator-(double r);
    friend myComplex operator+(const myComplex &c1, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, double r);
    friend myComplex operator-(double r, const myComplex &c2);
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
void myComplex::coutCom()
{
    cout << "(" << real << "," << imag << ")";
}
myComplex myComplex::operator-(const myComplex &c)
{
    return myComplex(this->real - c.real, this->imag - c.imag);
}
myComplex myComplex::operator-(double r)
{
    return myComplex(this->real - r, this->imag);
}
myComplex operator+(const myComplex &c1, const myComplex &c2)
{
    return myComplex(c1.real + c2.real, c1.imag + c2.imag);
}
myComplex operator-(const myComplex &c1, const myComplex &c2)
{
    return myComplex(c1.real - c2.real, c1.imag - c2.imag);
}
myComplex operator-(const myComplex &c1, double r)
{
    return myComplex(c1.real - r, c1.imag);
}
myComplex operator-(double r, const myComplex &c1)
{
    return myComplex(r - c1.real, -c1.imag);
}

int main()
{
    myComplex c1(1, 2), c2(3, 4), res;
    c1.coutCom();
    cout << " operator+ ";
    c2.coutCom();
    cout << " = ";
    res = c1 + c2;
    res.coutCom();
    cout << endl;
    c1.coutCom();
    cout << " operator- ";
    c2.coutCom();
    cout << " = ";
    res = c1 - c2;
    res.coutCom();
    cout << endl;
    res = c1 - 2;
    res.coutCom();
    cout << endl;
    res = 5 - c1;
    res.coutCom();
    cout << endl;
    return 0;
}