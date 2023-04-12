#include <iostream>
#include <fstream>
using namespace std;

/*

int main()
{
    int x = 3, y = 3;
    string s1 = "first\n", s2 = "second\n", s3 = "third\n";
    switch (x % 2)
    {
    case 1:
        switch (y)
        {
        case 0:
            cout << s1;
            cout << s2;
            break;

        default:
            cout << "hello:";
            break;
        }
        break;
    case 2:
        cout << s3;
        break;
    default:
        break;
    }
    return 0;
}
*/

/**
// 将字符串转换为对应的整数
int Convert(char *str);

int main()
{
    char s[10] = "12345";
    int n = Convert(s);
    cout << n << endl;
    return 0;
}

int Convert(char *str)
{
    int num = 0, digit;
    for (int i=0; i<5; i++)
    {
        digit = str[i] - 48;
        num = num*10 + digit;
    }
    return num;
}
*/

/*
// Shape类是一个表示形状的抽象类，area()是求图形面积的函数，total()是一个通用的用以求不同形状的图形面积总和的函数，Shape类派生三角形类Triangle

class Shape
{
public:
    virtual float area() = 0;
}

float
total(Shape *s[], int n)
{
    float sum = 0.0;
    for (int f = 0; i < n; i++)
    {
        sum += s[i].area()
    }
    return sum;
}

class Triangle : public Shape
{
}
*/

/*
// 下面的程序将一个已有文件的内容复制到另一个文件中，请将程序补充完整
int main()
{
    fstream infile, outfile;
    infile.open("d:\\file1.txt",ios::in);
    if (!infile){
        cout<<"file1.txt can't open .\n";

    }
    outfile.open("d:\\file2.txt", ios::out);
    if (!outfile)
    cout<<"file2.txt can't open .\n";
    char str[80] = "0";
    while (!infile.eof())
    {
        infile.read(str, sizeof(str));
        outfile.write(str, sizeof(str));
        cout<<str;
    }
    infile.close();
    outfile.close();

    return 0;
}
*/

// 程序分析-输出结果
enum BoolConst
{
    False = 0,
    True = 1
};
class Boolean
{
public:
    Boolean(BoolConst x = False) { logic = x; }
    void print() const { logic ? cout << "TRUE " : cout << "FALSE "; }
    friend Boolean operator*(const Boolean &objl, const Boolean &obj2);

protected:
    BoolConst logic;
};
Boolean operator*(const Boolean &objl, const Boolean &obj2)
{
    return (objl.logic && obj2.logic) ? Boolean(True) : Boolean(False);
}
// int main()
// {
//     Boolean a(False), b(True), c;
//     c = a * b;
//     a.print(); // FALSE
//     b.print(); // TRUE
//     c.print(); // FALSE
//     return 0;
// }

template <class T>
void func1(T s[])
{
    int i;
    for (i = 0; i < 6; i++)
    {
        s[i] = i + 1;
        cout << s[i] << ' ';
    }
}
void func2(double s[], double w[])
{
    double sum = 0;
    int i, k;
    for (k = 0, i = 0; i < 6; i++)
    {
        sum += s[i];// 1, 3, 6  i=3, sum=0+4; i=4, sum=4+5; i=5, sum=9+6;
        if ((i + 1) % 3 == 0)
        {
            w[k] = sum / 3;
            cout << w[k] << ' '; //2 5
            sum = 0;
            k++;
        }
    }
}
int main()
{
    double s[6], w[3];
    func1(s);  //1 2 3 4 5 6 
    cout << endl
         << "平均值："; 
    func2(s, w); //2 5

    return 0;
}