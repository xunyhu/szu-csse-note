#include <iostream>
using namespace std;

/*课后题-程序填空*/
/*
void func(int a, int b, int c = 0)
{
    cout<<a<<b<<c<<endl;
}
int main ()
{
    func(5, 9); //要求输出结果590
    return 0;
}
*/


/*
int main()
{
    const int x=5, y=6;
    const int *p = &x;     //const int *p 当把 const 放最前面的时候，它修饰的就是 *p，*p 表示的是指针变量 p 所指向的内存单元里面的内容，即这个内容不可变。*p的值不能改变，而p（即地址）是可以改变的；
    p = &y;                              
    cout<<*p<<endl;  //要求输出结果6


    int x2=5, y2=6;
    int *const p2 = &x2;  //int *const p表示 p(地址)是常量，不可改变，但是*p的值可以改变
    x2 = 6;
    cout<<*p2<<endl;
    return 0;
}
*/



//求圆的面积
const float pi = 3.14159;
int main ()
{
    double r;
    cout<<"输入半径r:";
    cin>>r;
    double l = 2.0*pi*r;
    double s = pi*r*r;
    cout<<"\n周长是："<<l<<endl;
    cout<<"面积是："<<s<<endl;
    return 0;
}