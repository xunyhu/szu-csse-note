/**
 * 程序填空题
 */
#include <iostream>
using namespace std;

class myComplex
{
private:
    double real, imag;
public:
    myComplex(double, double);
    operator double();
    ~myComplex();
};

myComplex::myComplex(double r = 0, double i = 0)
{
    real = r;
    imag = i;
}

myComplex::~myComplex()
{
}

myComplex::operator double()
{
    return real;
}


int main()
{
    myComplex c(1.2, 3.4);
    cout<<(double)c<<endl; //输出1.2
    double n = 12 + c;    //等价于double n = 2 + c.operator double()
    cout<<n; 
    return 0;
}