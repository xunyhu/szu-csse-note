#include <iostream>
using namespace std;

// 定义求绝对值的函数模板并进行不同的调用
template <typename T>
T abs(T x)
{
    return x < 0 ? -x : x;
}

int main()
{
    int n = -5;
    int m = 10;
    double d = -1.5;
    float f = 3.2;
    cout<<n<<"的绝对值是："<<abs(n)<<endl;
    cout<<m<<"的绝对值是："<<abs(m)<<endl;
    cout<<d<<"的绝对值是："<<abs(d)<<endl;
    cout<<f<<"的绝对值是："<<abs(f)<<endl;
    return 0;
}