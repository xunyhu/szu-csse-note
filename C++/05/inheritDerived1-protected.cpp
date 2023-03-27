#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
/**
 * 基类中保护成员的访问方式
 * 
 * 在基类中，一般都将需要隐藏的成员说明为保护成员而非私有成员。将基类中成员变量的访问方式修改为protected后，在派生类中可以直接访问。
 */
class BaseClass
{
protected:  
    int v1, v2;

public:
    void SetValue(int m, int n)
    {
        v1 = m;
        v2 = n;
    }
    void PrintValue();
};
void BaseClass::PrintValue()
{
    cout << "v1=" << v1 << "\tv2=" << v2;
}
class DerivedClass : public BaseClass
{
    int v3;

public:
    void SetValue(int m, int n, int k)
    {
        v1 = m;
        v2 = n;
        v3 = k;
    }
    void SetValue(int m, int n)
    {
        v1 = m;
        v2 = n;
    }
    void PrintValue();
};
void DerivedClass::PrintValue()
{
    cout << endl;
    BaseClass::PrintValue();
    cout << "\tv3=" << v3 << endl;
}

int main()
{
    BaseClass baseCla;
    DerivedClass derivedCla;
    cout << "初始时的随机值： " << endl;
    baseCla.PrintValue();
    derivedCla.PrintValue();
    cout <<"修改基类中的值后"<<endl;
    baseCla.SetValue(10,20);
    baseCla.PrintValue();
    derivedCla.PrintValue();
    cout <<"从派生类修改从基类继承的值后"<<endl;
    derivedCla.SetValue(20,30);
    baseCla.PrintValue();
    derivedCla.PrintValue();
    cout<<"从派生类修改从基类继承的值及本类的值："<<endl;
    derivedCla.SetValue(100, 200, 300);
    baseCla.PrintValue();
    derivedCla.PrintValue();
    return 0;
}