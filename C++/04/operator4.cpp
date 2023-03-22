/**
 * 重载强制类型转换运算符
 * 
 * 在C++中，类型的名字（包括类的名字）本身也是一种运算符，即强制类型转换运算符。
 * 强制类型转换运算符是单目运算符，也可以被重载，但只能重载为成员函数，不能重载为全局函数。经过适当重载后，“(类型名)对象”这个对对象进行强制类型转换的表达式就等价于“对象.operator 类型名()”,即变成对运算符函数的调用。
 */
#include <iostream>
using namespace std;

class myComplex
{
private:
    double real, imag;

public:
    myComplex(double r, double i) : real(r), imag(i) {}
    operator double()
    {
        return real;
    }
};

int main()
{
    myComplex c(1.2, -3.4);
    cout<<(double) c<<endl;  // c.operator double()
    double n = 12 + c;
    cout<<n;
    return 0;
}