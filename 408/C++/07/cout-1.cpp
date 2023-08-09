#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// P282

int main()
{
    int x, y;
    cin >> x >> y;
    freopen("d:\\test.txt", "w", stdout);
    if (y == 0)
        cerr << "error." << endl;
    else
        cout << x << "/" << y << "=" << x / y << endl;

    return 0;
}