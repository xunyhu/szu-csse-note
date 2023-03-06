#include <iostream>
#include <cmath>
using namespace std;

/*课后练习题：程序分析*/

/*
//求s的结果
class A {
    public:
        int fun(double);
        int fun(int);
};

int A::fun(double x) {
    return (int)x/2;
}

int A::fun(int x) {
    return x * 2;
}

int main() {
    A a;
    int s = a.fun(6.0) + a.fun(2);
    cout << s<<endl;
    return 0;
}
*/


//给出程序结果
/*
int main () 
{
    int oneInt = 1;
    int &ref = oneInt; //'&'代表引用
    ref = 2;
    cout<<"oneInt="<<oneInt<<"，"<<"ref="<<ref<<endl; //"oneInt=2，ref=2"
    int *p = &ref;
    *p = 3;
    cout<<"ref="<<ref<<","<<"p的地址:"<<p<<"，p的值："<<*p<<endl; //"ref=3,p的地址：{oneInt的内存地址},p的值：3"
    int *one_point = &oneInt;
    cout<<"oneInt的内存地址："<<&oneInt<<endl;
    cout<<"oneInt的值"<<*one_point<<endl;
    return 0;
}
*/




// int f(int);
// int main()
// {
//     int i;
//     for (i=0; i<3; i++)
//         cout<<f(i)<<endl;   //3 , 4, 5
//     return 0;
// }

// int f(int a)
// {
//     int b=0, c=1;
//     b++;c++;
//     return int(a + pow(double(b), 2) + c);  // pow(4.0，3) === 4³
//     /**
//      * a=0, b=1, c=2,  0 + 1² + 2 = 3
//      * a=1, b=1, c=2,  1 + 1² + 2 = 4
//      * a=2, b=1, c=2,  2 + 1² + 2 = 5
//     */
// }


/* 
int main()
{
    int b=0;
    cout<<"double(b)="<<double(b)<<endl;
    double c=1.23;
    cout<<"int(c)="<<int(c)<<endl;
    return 0;
}
*/


/**
 * int 是整数类型，float 和double是浮点数类型。
   一般来说，float 与double区别不大（使用上来说）。只不过double使用了更多的内存空间来储存数据（一般一个double占8个字节，一个float占4个字节）。使用更多内存空间的优点在于，一方面精度更高，另一方面是数据范围更广。
*/
int bigger(int x, int y)
{
    if (x > y) return x;
    else return y;
}

float bigger(float x, float y)
{
    if (x > y) return x;
    else return y;
}

double bigger(double x, double y)
{
    if (x > y) return x;
    else return y;
}

float bigger(int x, float y)
{
    if (x > y) return x;
    else return y;
}

int main()
{
    int x1=10, y1=20;
    float xF=30, yF=40;
    double xD=50, yD=60;
    cout<<bigger(x1, yF)<<endl;

    float a = 1.2345;
    double b = 456.789;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}