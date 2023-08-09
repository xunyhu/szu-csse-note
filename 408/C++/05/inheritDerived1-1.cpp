#include <iostream>
using namespace std;

/*
    类的继承与派生  P183
    第一节  类的继承与类的派生
*/
/*
    每个int型变量占4个字节，char型变量占1个字节，在64位系统中，指针的大小占8个字节。
    对象占用的存储空间包含对象内各成员变量占用的存储空间。出于计算机内部处理效率的考虑，为变量分配内存时，会根据其对应的数据类型，在存储空间内对变量的起始地址进行边界对齐。
*/
/*
    如果基类有友元类或友元函数，则其派生类不会因继承关系而也有此友元类或友元函数。
    如果基类是某类的友元，则这种友元关系是被继承的。即被派生类继承过来的成员函数，如果原来是某类的友元函数，那么它作为派生类的成员函数仍然是某类的友元函数。
    总之，基类的友元不一定是派生类的友元；基类的成员函数是某类的友元函数，则其作为派生类继承的成员函数仍是某类的友元函数。
*/

class BaseClass
{
public:
    int v1, v2;
    BaseClass() : v1(1), v2(2) {}
    void temp1() {}
};

class DerivedClass : public BaseClass
{
    int v1;
    void temp1() {}

public:
    DerivedClass() : v1(10) {}
    void printv()
    {
        cout << "v1=" << v1 << endl;
        cout << "Base.v1=" << BaseClass::v1 << endl;
    }
};

int main()
{
    cout << "Base-size=" << sizeof(BaseClass) << endl;
    cout << "Derived-size=" << sizeof(DerivedClass) << endl;
    BaseClass bc;
    DerivedClass dc;
    dc.printv();
    return 0;
}