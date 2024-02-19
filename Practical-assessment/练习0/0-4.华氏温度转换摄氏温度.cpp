#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    float F;
    cin >> F;
    cout << fixed << setprecision(2);
    cout << "c=" << 5 * (F - 32) / 9 << endl;
    return 0;
}
