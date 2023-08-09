//
//  class-03.cpp 类的静态成员
//  Code
//
//  Created by 胡瑞 on 2023/3/18.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class A
{
public:
    double x, y;
    static int num;
    A()
    {
        num++;
    }
    A(double i, double j)
    {
        x = i;
        y = j;
        num++;
    }
    static void staticFun()
    {
        cout<<"current_num="<<num<<endl;
    }
};
//静态成员赋值
int A::num = 0;

int main()
{
    A obj(1.23, 4.56);
    //静态成员调用
    A::staticFun();
    obj.staticFun();
    
    A *p;
    p = new A[3];
    for (int i=0; i<3; i++)
        p[i].staticFun();
    return 0;
}
