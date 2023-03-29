/*
    程序设计题     Pdf-p249
    2. 设计一个几何图形类，并派生若干个具体的几何图形，包括三角形、正方形和圆形等。为各类定义必要的成员变量，添加构造函数、析构函数和成员函数。成员函数包括计算图形的周长、面积和显示图形信息等。
*/
#include <iostream>
using namespace std;

/*
    几何图形类（Shape）   成员函数：计算周长，计算面积，显示图形信息
    三角形类
    正方形类
    长方形类
    圆形类 Circle  
*/

const double pi = 3.1415926;

class Shape
{
protected:
    double a, b, s;
public:
    Shape():s(0) {}
    Shape(double x = 0, double y = 0):a(x),b(y){}
    double CalculateArea();
};
double Shape::CalculateArea()
{
    if (b == 0)
        s = pi * a * a;
    else 
        s = a * b;
    return s;
}

class Circle : public Shape
{
    public:
        Circle(double r=0):Shape(r){}
};

int main()
{
    double r, a, b;
    cout<<"请输入圆的半径：r=";
    cin>>r;
    Circle R(r);
    cout<<"圆的面积是："<<R.CalculateArea()<<endl;
    return 0;
}