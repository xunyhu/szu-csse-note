/*
    程序分析题     Pdf-p248
*/
#include <iostream>
using namespace std;

/*
    4.  构造函数执行顺序：CC -> CB -> CD  依次输出："CC:c=6", "CB:b=4", "CD:d=2"
        析构函数执行顺序：CD -> CB -> CC  依次输出："CD的对象在消亡", "CB的对象在消亡", "CC的对象在消亡"

        正确答案：
            "CB:b=4", "CC:c=6", "CD:d=2"
            "CD的对象在消亡",  "CC的对象在消亡", "CB的对象在消亡"
*/

class CB
{
    int b;

public:
    CB(int n)
    {
        b = n;
        cout << "CB::b=" << b << endl;
    }
    ~CB()
    {
        cout << "CB的对象在消亡" << endl;
    }
};

class CC
{
    int c;

public:
    CC(int n1, int n2)
    {
        c = n1;
        cout << "CC::c=" << c << endl;
    }
    ~CC()
    {
        cout << "CC的对象在消亡" << endl;
    }
};

class CD : public CB, public CC
{
    int d;

public:
    CD(int n1, int n2, int n3, int n4) : CC(n3, n4), CB(n2)
    {
        d = n1;
        cout << "CD::d=" << d << endl;
    }
    ~CD()
    {
        cout << "CD的对象在消亡" << endl;
    }
};

int main()
{
    CD CDobj(2, 4, 6, 8); 
    return 0;
}