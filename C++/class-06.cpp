//
//  class-06.cpp
//  Code
//
//  Created by 胡瑞 on 2023/3/19.
//

/**
 第七节    友元函数
    面向对象的程序设计要求在类外不能访问类的私有成员变量，而必须通过公有的成员函数来访问。
    友元机制是对一些类外的函数打开的一个特殊通道，授权它们能够访问本类的私有成员变量。
 
 友元函数
 格式：friend 返回值类型 函数名(参数表) || friend 返回值 类A::类A的成员函数名(参数表)
 友元类
 如果将一个类B说明为另一个类A的友元类，则类B中的所有函数都是类A的友元函数，在类B的所有成员函数中都可以访问类A中的所有成员。
 格式： friend class 类名
 */

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

class Pixel;

class Test
{
public:
    void printX(Pixel p);
};

class Pixel
{
private:
    int x, y;
public:
    Pixel(int x0, int y0)
    {
        x = x0;
        y = y0;
    }
    void printxy()
    {
        cout<<"pixel:("<<x<<","<<y<<")"<<endl;
    }
    friend double getDist(Pixel p1, Pixel p2); //友元函数原型
    friend void Test::printX(Pixel p);
};
void Test::printX(Pixel p)
{
    cout<<"x="<<p.x<<"\ty="<<p.y<<endl;
    return;
}
double getDist(Pixel p1, Pixel p2)
{
    double xd = double(p1.x - p2.x);
    double xy = double(p1.y - p2.y);
    return sqrt(xd*xd + xy*xy);
}

int main()
{
    Pixel p1(0, 0), p2(10, 10);
    p1.printxy();
    p2.printxy();
    cout<<"(p1, p2)间距离="<<getDist(p1, p2)<<endl;
    Test t;
    cout<<"从友元函数中输出--"<<endl;
    t.printX(p1);
    t.printX(p2);
    return 0;
}
