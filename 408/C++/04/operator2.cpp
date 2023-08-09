/**
 * 第二节 重载赋值运算符
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
    ~myComplex() {}
    myComplex addCom(myComplex c1);
    void coutCom();
    void coutCom(string s);
    void changeReal(double r);
    myComplex operator-(const myComplex &c);
    myComplex operator-(double r);
    friend myComplex operator+(const myComplex &c1, const myComplex &c2);
    friend myComplex operator+(const myComplex &c1, double r);
    friend myComplex operator+(double r, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, const myComplex &c2);
    friend myComplex operator-(const myComplex &c1, double r);
    friend myComplex operator-(double r, const myComplex &c2);
    myComplex &operator = (const myComplex &c);
    myComplex &operator = (double);
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
myComplex myComplex::addCom(myComplex c1)
{
    return myComplex(this->real + c1.real, this->imag + c1.imag);
}
void myComplex::coutCom()
{
    cout << "(" << real << "," << imag << ")"<<endl;
}
void myComplex::coutCom(string s)
{
    cout << s << "=(" << real << "," << imag << ")"<<endl;
}
void myComplex::changeReal(double r)
{
    this->real = r;
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
myComplex operator+(const myComplex &c1, double r)
{
    return myComplex(c1.real + r, c1.imag);
}
myComplex operator+(double r, const myComplex &c1)
{
    return myComplex(c1.real + r, c1.imag);
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
myComplex &myComplex::operator=(const myComplex &c1)
{
    this->real = c1.real;
    this->imag = c1.imag;
    return *this;
}
myComplex &myComplex::operator=(double r)
{
    this->real = r;
    this->imag = 0;
    return *this;
}

int main()
{
    myComplex c1(1, 2), c2(3, 4), res;
    c1.coutCom("\t\t\tc1");
    c2.coutCom("\t\t\tc2");
    res = c1 + c2;
    res.coutCom("执行res=c1+c2->\t\tres");
    res = c1.addCom(c2);
    res.coutCom("执行c1.addCom(c2)->\tres");
    res = 7;
    res.coutCom("执行res=7->\t\tres");
    res = 7 + 8;
    res.coutCom("执行res=7+8->\t\tres");
    return 0;
}