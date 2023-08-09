/**
 * 程序填空题
 */
#include <iostream>
using namespace std;

class myComplex
{
public:
    int real, imag;
    myComplex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    ~myComplex();
};
myComplex operator+(myComplex &a , myComplex &b)
{
    int t = a.real + b.real;
    int i = a.imag + b.imag;
    return myComplex(t, i);
}
myComplex::~myComplex()
{
}


int main()
{
    myComplex x(1, 2), y(3, 4), z;
    z = x + y;
    cout<<z.real<<"+"<<z.imag<<"i"<<endl;
    return 0;
}