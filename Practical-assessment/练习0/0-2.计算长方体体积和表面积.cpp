#include <iostream>
using namespace std;
int main()
{
    int length, width, height;
    cin >> length >> width >> height;

    cout << "V=" << length * width * height << endl;
    cout << "S=" << 2 * (length * width + length * height + width * height) << endl;
    return 0;
}