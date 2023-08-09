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

/*
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
*/

/*
class Samp
{
public:
    void SetMuti(int a, int b)
    {
        i = a;
        j = b;
    }
    ~Samp() { cout << "析构..." << i << endl; }
    int GetMuti() { return i * j; }

protected:
    int i, j;
};
int main()
{
    Samp *p;
    int N = 3;
    p = new Samp[N];
    if (!p)
    {
        cout << "内存分配错误\n";
        return 1;
    }
    for (int i = 0; i < N; i++)
        p[i].SetMuti(i, i + 1);
    for (int i = 0; i < N; i++)
        cout << "Muti[" << i << "]值是：" << p[i].GetMuti() << endl;  //p[0]:0, p[1]:2, p[2]:6
    delete[] p;
    return 0;
}
*/

/*
class Computer
{
public:
    Computer() { cout << "Computer constructor" << endl; }
    virtual void subscribe() = 0;
    void read() { cout << "Read paper" << endl; }
    ~Computer() { cout << "Computer destructor" << endl; }
};
class Design : public Computer
{
public:
    Design() { cout << "Design constructor" << endl; }
    virtual void subscribe() { cout << "Subscribing Design" << endl; }
    void read() { cout << "Reading Design" << endl; }
    ~Design() { cout << "Design destructor" << endl; }
};
int main()
{
    Design journal;
    Computer *p_journal = &journal;
    journal.subscribe(); //"Computer constructor" -> "Design constructor" -> "Subscribing Design"
    journal.read();
    p_journal->read();   //"Read paper" ->  "Design destructor"  ->  "Computer destructor"
    return 0;
}
*/

/*
class A
{
private:
    int n;

public:
    A(int i) { n = i; }
    A operator++()
    {
        n++;
        return *this;
    }
    A operator++(int)
    {
        n += 2;
        return *this;
    }
    void Display() { cout << "n=" << n << endl; }
};
int main()
{
    A a(2), b(2);
    a++; // 调用后置函数 operator++(int)
    ++b; // 调用operator++()
    a.Display();
    b.Display();
    return 0;
}
*/

// 根据下面类中Sum函数成员的原型和注释写出它的类外定义。（5分）
class AA
{
    int *a, n, MS;

public:
    void InitAA(int aa[], int nn, int ms)
    {
        if (nn > ms)
        {
            cout << "Error!" << endl;
            return;
        }
        MS = ms;
        a = new int[MS];
        for (int i = 0; i < n; i++)
            a[i] = aa[i];
    }
    int Sum(); // 求出并返回数组a中前n个元素之和
};

int AA::Sum()
{
    int res;
    for (int i = 0; i < n; i++)
        res += a[i];
    return res;
}

// 程序设计题：请声明Student类，类中包含数据成员姓名和分数，成员函数compare（用于比较两名学生的分数）。在主函数中输入n名学生的信息后，输出其中最高分和最低分学生的姓名及分数。（10分）

/*
class Student
{
public:
    string name;
    int score;
    void compare(Student _stu);
    Student(string _name, int _score):name(_name),score(_score){}
};

void Student::compare(Student _stu) {
    if (_stu.score < score)
        cout<<"最高分学生姓名："<<name<<", 分数："<<score<<endl;
    else
        cout<<"最高分学生姓名："<<_stu.name<<", 分数："<<_stu.score<<endl;
};


int main()
{
    Student a("hurui", 99), b("hu", 100), c("rui", 66);
    a.compare(b);
    return 0;
}
*/

// 参考答案
class student
{
public:
    char name[10];
    int score;
    friend int compare(student &sl, student &s2);
};
int compare(student &sl, student &s2)
{
    if (sl.score >= s2.score)
        return 1;
    else
        return -1;
}
int main()
{
    student st[100];
    int i, n, min = 0, max = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> st[i].name >> st[i].score;
        if (compare(st[max], st[i]) == -1)
            max = i;
        if (compare(st[min], st[i]) == 1)
            min = i;
    }
    cout << "最高分：" << st[max].score << "，姓名：" << st[max].name << endl;
    cout << "最低分：" << st[min].score << "，姓名：" << st[min].name << endl;
    return 0;
}