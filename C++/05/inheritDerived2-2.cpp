#include <iostream>
#include <string>
using namespace std;

/*
    类的继承与派生
    第二节  访问控制
    2. 类型兼容规则
        类型兼容规则是指在需要基类对象的任何地方，都可以使用公有派生类的对象来替代，也称为赋值兼容规则。
        凡是基类能解决的问题，公有派生类都可以解决。
        3条类型兼容规则：
            1. 派生类的对象可以赋值给基类对象
            2. 派生类的对象可以用来初始化基类引用
            3. 派生类对象的地址可以赋值给基类指针，即派生类的指针可以赋值给基类的指针。
            上述3条规则反过来是不成立的。不能把基类对象赋值给派生类对象。
*/

class Base
{
public:
    int vBpub;
protected:
    int vBpro;
private:
    int vBpri;
public:
    Base()
    {
        vBpub = 10;
        vBpro = 20;
        vBpri = 30;
    };
    void SetPriValue(int);
    void SetProValue(int, int);
    int GetPriValue();
    int GetProValue();
};
void Base::SetPriValue(int k)
{
    vBpri = k;
}
void Base::SetProValue(int m, int n)
{
    vBpro = m;
    vBpri = n;
}
int Base::GetPriValue()
{
    return vBpri;
}
int Base::GetProValue()
{
    return vBpro;
}

class Derived : public Base
{
public:
    int vDpub, vBpub;
protected:
    int vDpro;
private:
    int vDpri;
public:
    Derived()
    {
        vDpub = 100;
        vDpro = 200;
        vDpri = 300;
        vBpub = 15;
    };
    void SetPriValue(int);
    void SetProValue(int, int);
    int GetPriValue();
    int GetProValue();
    void PrintValue();
};
void Derived::SetPriValue(int k)
{
    vDpri = k;
}
void Derived::SetProValue(int m, int n)
{
    vDpro = m;
    vDpri = n;
    Base::vBpro = 2*m;
    // Base::vBpri = 2*n; //不可以直接访问从基类继承的私有成员变量

    /**
     * 从基类继承的公有成员、保护成员        派生类中可以直接访问
     * 从基类继承的私有成员                 派生类中不可以直接访问
    */
}
int Derived::GetPriValue()
{
    return vDpri;
}
int Derived::GetProValue()
{
    return vDpro;
}
void Derived::PrintValue()
{
    cout<<"在派生类中访问基类"<<endl;
    cout<<"基类公有变量："<<vBpub<<endl;
    // cout<<Base::vBpri<<endl;   不能直接访问基类的私有变量
     /**
     *        各成员                    派生类中                基类与派生类外
     *       公有成员                   直接访问                直接访问 
     *       保护成员                   直接访问                调用公有函数访问
     *       私有成员                 调用公有函数访问           调用公有函数访问
    */
    cout<<"从基类继承的保护变量："<<Base::vBpro<<endl;  
}

int main()
{
    Base bObj;
    Derived dObj;
    cout<<"在主函数中访问基类Base"<<endl;
    cout<<"公有成员："<<bObj.vBpub<<endl;
    /**
     *        各成员                        派生类中             基类与派生类外
     * 从基类继承的公有成员                 可以直接访问            可以直接访问 
     * 从基类继承的保护成员                 不可以直接访问          调用公有函数访问
     * 从基类继承的私有成员                 调用公有函数访问         调用公有函数访问
    */
    // cout<<"保护成员："<<bObj.vBpro<<endl;   不能直接访问保护成员变量
    // cout<<"私有成员："<<bObj.vBpri<<endl;   
    cout<<"保护成员："<<bObj.GetProValue()<<endl;
    cout<<"私有成员："<<bObj.GetPriValue()<<endl;
    cout<<"在主函数中访问派生类Derived"<<endl;
    cout<<"公有成员："<<dObj.vBpub<<endl;
    cout<<"      保护成员："<<dObj.GetProValue()<<endl;
    cout<<"基类  保护成员："<<dObj.Base::GetProValue()<<endl;
    cout<<"私有成员："<<dObj.GetPriValue()<<endl;
    cout<<"dObj.vBpub="<<dObj.vBpub<<endl;
    cout<<"dObj.Base::vBpub="<<dObj.Base::vBpub<<endl;
    dObj.PrintValue();
    return 0;
}