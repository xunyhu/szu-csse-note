#include <iostream>
using namespace std;

class Location
{
public:
    int x, y;
    void init(int intx, int inty);
    int Getx();
    int Gety();
};
void Location::init(int intx, int inty)
{
    x = intx;
    y = inty;
}
int Location::Getx()
{
    return x;
}
int Location::Gety()
{
    return y;
}
void display(Location &rL)
{
    cout << rL.Getx() << " " << rL.Gety() << endl;
}

int main()
{
    Location A[5] = {{5, 5}, {3, 3}, {1, 1}, {2, 2}, {4, 4}};
    Location *rA = A;
    A[3].init(7, 3);
    rA->init(7, 8);
    for (int k = 0; k < 5; k++)
        display(*(rA++));  //{{7, 8}, {3, 3}, {1, 1}, {7, 3}, {4, 4}}  =>  7 8; 3 3; 1 1; 7 3; 4 4;
    return 0;
}