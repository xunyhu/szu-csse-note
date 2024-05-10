/*
样本输入：
2
5 11 22 33 44 55
6 111
22
4 999 888 777 666
3 100
333

样本输出：
11 22 33 44 55 111
11 33 44 55 111
999 888 100 777 666
ERROR


后台输入：
1
4 22 33 44 55
2 111
22

后台输出：
22 111 33 44 55
111 33 44 55


*/
#include <iostream>
using namespace std;
const int maxw = 999;
class List
{
private:
    int data[maxw];
    int len;

public:
    List()
    {
        len = 0;
    }
    List(int d[], int n)
    {
        int i;
        len = n;
        for (i = 1; i <= n; i++)
            data[i] = d[i - 1];
    }
    void insertt(int i, int n)
    {
        for (int j = len + 1; j > i; j--)
            data[j] = data[j - 1];
        data[i] = n;
        len++;

        shuchu();
    }
    void deletee(int n)
    {
        int f = 0;
        for (int i = 0; i <= len; i++)
        {
            if (data[i] == n)
            {
                for (int j = i; j <= len; j++)
                {
                    data[j] = data[j + 1];
                }
                f = 1;
                len--;
            }
            if (f == 1)
                break;
        }
        if (f)
            shuchu();
        else
            cout << "ERROR" << endl;
    }
    void shuchu()
    {
        for (int i = 1; i <= len; i++)
        {
            if (i == len)
                cout << data[i] << endl;
            else
                cout << data[i] << " ";
        }
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
            cin >> d[i];

        List l(d, n);

        int w, ww, www;
        cin >> w >> ww;
        l.insertt(w, ww);
        cin >> www;
        l.deletee(www);
    }
    return 0;
}