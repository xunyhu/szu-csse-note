#include <iostream>
using namespace std;

// 多态机制下对象存储空间的大小
class A
{
public:
    int i;
    virtual void func() {}
    virtual void func2() {}
};

class B : public A
{
    int j;
    void func() {}
};

int main()
{
    cout << sizeof(A) << "，" << sizeof(B); //加上virtual 16， 16； 去掉virtual 4， 8
    return 0;
}