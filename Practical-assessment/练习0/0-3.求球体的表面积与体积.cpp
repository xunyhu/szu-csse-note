#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.1415;
    double r, h;
    cin >> r >> h;
    cout << fixed << setprecision(2);
    cout << "C1=" << 2 * PI * r << endl;
    cout << "Sa=" << PI * r * r << endl;
    cout << "Sb=" << 4 * PI * r * r << endl;
    cout << "Va=" << (4 * PI * r * r * r) / 3 << endl;
    cout << "Vb=" << PI * r * r * h << endl;
    return 0;
}