/**
 * 程序分析题
 */
#include <iostream>
using namespace std;

class pointer
{
public:
    int a;
    int *p;
    pointer()
    {
        a = 100;
        p = new int(10);
    }
    pointer(const pointer &tempp)
    {
        if (this != &tempp)
        {
            a = tempp.a;
            p = tempp.p;
        }
    }
};


int main()
{
    pointer p1;
    pointer p2(p1);
    cout<<p1.a<<",\t"<<*p1.p<<",\t"<<(p1.p==p2.p)<<endl;  //100 指针地址取出p的值 true    cout-> 100,  10,  1
    *p1.p = 20;
    p2.a = 300;
    cout<<(p1.a == p2.a)<<",\t"<<*p1.p<<",\t"<<(p1.p==p2.p)<<endl; //false 指针地址取出p的值 true   cout-> 0,  20,  1
    return 0;
}