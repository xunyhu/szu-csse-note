/**
 * 重载流插入运算符
 */
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class myComplex
{
private:
    double real, imag;

public:
    myComplex() : real(0), imag(0) {}
    myComplex(double r, double i) : real(r), imag(i) {}
    ostream & operator << (ostream & os);
    friend istream & operator >> (istream & is, myComplex & c);
};
ostream & myComplex::operator<<(ostream & os)
{
    if (this->imag >= 0)
    {
        os<<this->real<<"+"<<this->imag<<"i";
    } else {
        os<<this->real<<"-"<<(-this->imag)<<"i";
    }
    return os;
}
istream & operator >>(istream & is, myComplex & c)
{
    string s;
    is>>s;
    int pos = s.find("+", 0);
    if (pos == -1) pos = s.find("-", 1);
    string sReal = s.substr(0, pos);
    c.real = atof(sReal.c_str());
    sReal = s.substr(pos, s.length()-pos-1);
    c.imag = atof(sReal.c_str());
    return is;
}

int main()
{
    myComplex c, c1;
    int n;
    cout<<"请输入两个复数([-]a+bi)和一个整数，以空格分隔"<<endl;
    cin>>c>>c1>>n;
    c1<<(c<<cout<<",")<<","<<n;
    return 0;
}