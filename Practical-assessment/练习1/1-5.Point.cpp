#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class circle
{
private:
    double x, y, r, m, n;

public:
    void set(double x1, double y1, double r1, double m1, double n1)
    {
        x = x1;
        y = y1;
        r = r1;
        m = m1;
        n = n1;
    }
    double getArea()
    {
        return 3.14 * r * r;
    }
    double getLength()
    {
        return 2 * 3.14 * r;
    }
    void contain()
    {
        if (sqrt((x - m) * (x - m) + (y - n) * (y - n)) <= r)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
};

int main()
{
    double x, y, r, m, n;
    cin >> x >> y >> r >> m >> n;
    circle p;
    p.set(x, y, r, m, n);
    cout << fixed << setprecision(2)
         << p.getArea() << " " << p.getLength()
         << endl;
    p.contain();

    return 0;
}