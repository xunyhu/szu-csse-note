#include <iostream>
#include <cmath>
using namespace std;

/**
 * 第七节 友元函数
 *
 *  友元函数
    格式：friend 返回值类型 函数名(参数表) || friend 返回值 类A::类A的成员函数名(参数表)
    友元类
    如果将一个类B说明为另一个类A的友元类，则类B中的所有函数都是类A的友元函数，在类B的所有成员函数中都可以访问类A中的所有成员。
    格式： friend class 类名
 */

// 已知类Point定义的是平面坐标系下的点，类Line定义的是经过两点的直线，GetLength()返回给定两点间的距离，请将下列程序补充完整。
class Point
{
private:
    double x, y;
    friend class Line;
public:
    Point(double i = 0, double j = 0)
    {
        x = i;
        y = j;
    }
    Point(Point &p)
    {
        x = p.x;
        y = p.y;
    }
};

class Line
{
private:
    Point p1, p2;
public:
    Line(Point &xp1, Point &xp2):p1(xp1),p2(xp2){};
    double GetLength();
};
double Line::GetLength()
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p2.y;
    return sqrt(dx*dx + dy*dy);
}

int main()
{
    Point p1, p2(6, 8);
    Line L1(p1, p2);
    cout<<L1.GetLength()<<endl;
    return 0;
}