/**
 * 重载自增、自减运算符
 * 
 * 自增、自减运算符有前置后置之分。以“++”为例，对于整数k，“++k”和“k++”的语义是不一样的。++k的返回值是k被修改后的值。k++返回值是k被修改前的值。
 */
#include <iostream>
using namespace std;

class CDemo
{
private:
    int n;
public:
    CDemo(int i=0):n(i){}
    CDemo & operator++(); //用于前置形式
    CDemo operator++(int); //用于后置形式
    operator int() { return n; }
    friend CDemo & operator--(CDemo &);
    friend CDemo operator--(CDemo &, int);
};
CDemo & CDemo::operator++()
{
    n++;
    return *this;
}
CDemo CDemo::operator++(int k)
{
    CDemo tmp(*this);
    n++;
    return tmp;
}
CDemo & operator--(CDemo &d)
{
    d.n--;
    return d;
}
CDemo operator--(CDemo &d, int)
{
    CDemo tmp(d);
    d.n--;
    return tmp;
}

int main()
{
    CDemo d(10);
    cout<<(d++)<<",";
    cout<<d<<",";
    cout<<(++d)<<",";
    cout<<d<<",";
    cout<<(d--)<<",";
    cout<<d<<",";
    cout<<(--d)<<",";
    cout<<d<<endl;
    return 0;
}