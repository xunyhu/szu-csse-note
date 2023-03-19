//
//  class-05.cpp 常量成员和常引用成员
//  Code
//
//  Created by 胡瑞 on 2023/3/18.
//

/**
 定义常量对象或常量成员变量的格式：  const 数据类型 常量名 = 表达式；
 定义常量函数： 类型说明符 函数名（参数表）const;
 */

#include <stdio.h>
#include <iostream>
using namespace std;


class Sample
{
public:
    Sample();
    void getValue() const; //常量成员函数
    void getValue();
    void priValue();
    void priVcon() const; //常量成员函数
};
Sample::Sample(){}
void Sample::getValue()const
{
    cout<<"常量成员函数"<<endl;
}
void Sample::getValue()
{
    cout<<"非-常量成员函数"<<endl;
}
void Sample::priValue()
{
    cout<<"非-常量成员函数"<<endl;
}
void Sample::priVcon() const
{
    cout<<"常量成员函数"<<endl;
}

class constClass
{
    const int conMbr; //类中的常量成员变量
    int Mbr;
public:
    constClass():conMbr(0),Mbr(100){}
    constClass(int i):conMbr(i)
    {
        Mbr = 200;
    }
    void printConst()
    {
        cout<<"调用非-常量函数printConst() "<<"conMbr="<<conMbr<<", Mbr="<<Mbr<<endl;
    }
    void getConst()
    {
        cout<<"调用非-常量函数getConst() "<<"conMbr="<<conMbr<<", Mbr="<<Mbr<<endl;
    }
    void getConst() const
    {
        cout<<"调用常量函数getConst() "<<"conMbr="<<conMbr<<", Mbr="<<Mbr<<endl;
    }
    int getValue()
    {
        return Mbr;
    }
    void processConst()
    {
        cout<<"-- 在processConst函数中 非常量 --"<<endl;
        int x = 2 * conMbr + 1;
        cout<<"x=2*conMbr+1="<<x<<endl;
        Mbr++;
        cout<<"Mbr="<<Mbr<<endl;
    }
    void processConst() const
    {
        cout<<"-- 在processConst函数中 常量 --"<<endl;
        int x = conMbr + 1;
        cout<<"x = conMbr + 1 ="<<x<<endl;
        cout<<"Mbr="<<Mbr<<endl;
    }
};

class CDemo
{
public:
    const int num;
    const int&ref; //常引用型成员变量
    int value;
public:
    CDemo(int n):num(n),ref(value),value(4){}
};

int main()
{
//    const Sample cono;
//    Sample o;
//    cout<<"cono\t";
//    cono.getValue();
//    cout<<"o\t";
//    cono.getValue();
//    cout<<"o\t";
//    o.priVcon();    //非常量对象可以调用常量成员函数
//    cout<<"cono\t";
////    cono.priValue();  //常量成员函数只能被常量对象调用
    constClass obj1(123), obj2;
    obj1.printConst();
    obj2.getConst();
//    obj2.processConst();
    const constClass obj3(3);
    obj3.getConst();
//    obj3.processConst();
    cout<<sizeof(CDemo)<<endl;
    CDemo f(100);
    cout<<"f.num="<<f.num<<"\tf.ref="<<f.ref<<"\tf.value="<<f.value<<endl;
    return 0;
}
