#include <iostream>
#include <string>
using namespace std;
class CStudent
{
private:
    string name;
    string number;
    string xb;
    string xy;
    string tele;

public:
    void set(string _name, string _number, string _xb, string _xy, string _tele)
    {
        name = _name;
        number = _number;
        xb = _xb;
        xy = _xy;
        tele = _tele;
    }
    void print()
    {
        cout << name << endl;
    }
};
int main()
{
    int t, i;
    string name, number, xb, xy, tele;
    cin >> t;
    CStudent *p = new CStudent[t];
    for (i = 0; i < t; i++)
    {
        cin >> name >> number >> xb >> xy >> tele;
        p[i].set(name, number, xb, xy, tele);
        p[i].print();
    }
    delete[] p;
    return 0;
}