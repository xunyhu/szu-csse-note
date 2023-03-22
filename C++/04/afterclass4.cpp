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
            p = new int();
            *p = *tempp.p;
        }
    }
    ~pointer()
    {
        if(p!=NULL) delete p;
    }
    pointer & operator=(const pointer &c)
    {
        if (this == &c) return *this;
        delete this->p;
        this->p = new int(*c.p);
        return *this;
    }
};


int main()
{
    pointer p1;
    pointer p2(p1);
    cout<<p1.a<<",\t"<<*p1.p<<",\t"<<(p1.p==p2.p)<<endl;  //100,  10,  0
    *p1.p = 20;
    p2.a = 300;
    cout<<(p1.a == p2.a)<<",\t"<<*p1.p<<",\t"<<(p1.p==p2.p)<<endl; //0,  20,  0
    return 0;
}