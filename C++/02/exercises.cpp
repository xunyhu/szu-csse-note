#include <iostream>
using namespace std;

class Test
{
private:
    /* data */
    int x, y;
public:
    Test(int i, int j);
    ~Test();

    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};

Test::Test(int i, int j)
{
    x = i;
    y = j;
}

Test::~Test()
{
}

int main()
{
    Test mt(10, 20);
    cout<<mt.getx();
    cout<<mt.gety()<<endl;
    return 0;
}