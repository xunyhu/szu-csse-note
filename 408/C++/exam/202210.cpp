#include <iostream>
using namespace std;

/*
    36. void setScore(); return (stu.score + score)/2
    37. x = x; TwoCord.display();
    38. ；Singleton *p;
    39. item[i]=defVal; int item(int index);
    40. TwoCord TwoCord operator+; x = cl.x + x, y = cl.y + y, return *this;
*/

/*
    41.
*/
class Triangle
{
public:
    void setRows(int rows) { _rows = rows; }
    void create()
    {
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                _array[i][j] = _array[i - 1][j - 1] + _array[i - 1][j];
                /**
                 * i = 0;  [0, 0, 0, 0, 0]
                 * i = 1;  [1, 1, 0, 0, 0]
                 * i = 2;  [1, 2, 1, 0, 0]
                 * i = 3;  [1, 3, 3, 1, 0]
                 * i = 4;  [1, 4, 6, 4, 1]
                 */
            }
            _array[i][0] = _array[i][i] = 1;
            /*
                i=0, [[1, 0, 0, 0, 0], [], [], [], []]
                i=1, [[1, 0, 0, 0, 0], [1, 1, 0, 0, 0], [], [], []]
                i=2, [[1, 0, 0, 0, 0], [1, 1, 0, 0, 0], [1, 2, 1, 0, 0], [], []]
                i=3, [[1, 0, 0, 0, 0], [1, 1, 0, 0, 0], [1, 2, 1, 0, 0], [1, 3, 3, 1, 0], [1, 4, 6, 4, 1]]
            */
        }
    }
    void display()
    {
        for (int i = 0; i < _rows; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << _array[i][j] << " "; // 1, 0, 0, 0, 0   1, 1, 0, 0, 0   1, 2, 1, 0, 0   1, 3, 3, 1, 0   1, 4, 6, 4, 1
            cout << endl;
        }
    }

private:
    int _rows;
    int _array[100][100];
};
/*
int main()
{
    Triangle ta;
    ta.setRows(5);
    ta.create();
    ta.display();  //实际运行结果： 1 ；1 1 ；1 2 1 ；1 3 3 1 ；1 4 6 4 1 ；
    return 0;
}
*/

/*
    42.

class A
{
public:
    A(int n) : val(n) {}

protected:
    int val;
};
class B : public A
{
    B *pb;

public:
    B(int n) : A(n) { pb = (n > 0 ? new B(n - 1) : 0); }
    ~B() { delete pb; }
    void display()
    {
        cout << val << endl;
        if (pb)
            pb->display();
    }
};
int main()
{
    B b(4);  //new B(3) -> new B(2) -> ... -> 0;
    b.display(); //实际运行结果 4 3 2 1 0
    return 0;
}
*/

/*43.
class A
{
public:
    virtual ~A() {}
    void f()
    {
        g();
        h();
    }
    virtual void h() { cout << "A::h()" << endl; }

protected:
    void g() { cout << "A::g()" << endl; }
};
class B
{
public:
    B(int n) : val(n) {}

protected:
    int val;
};
class C : public A, private B
{
public:
    C(int nl, int n2) : B(n2), num(nl) {}
    virtual ~C() {}
    virtual void h()
    {
        cout << "num=" << num << endl;
        cout << "val=" << val << endl;
    }

protected:
    void g() { cout << "C::g()" << endl; }

private:
    int num;
};
int main()
{
    C c(1, 2);
    c.f();  // A::g()； num=1；val=2;
    return 0;
}
*/

class A
{
public:
    virtual void f() { cout << "A::f()" << endl; }
    void g() { cout << "A::g()" << endl; };
};
class B : public A
{
public:
    void f() { cout << "B::f()" << endl; }
    virtual void g() { cout << "B::g()" << endl; };
};
class C : public B
{
public:
    void f() { cout << "C::f()" << endl; }
    void g() { cout << "C::g()" << endl; };
};
/**
int main()
{
    C c;
    A *pa = &c;
    B *pb = &c;
    pa->f(); //"C::f()"
    pa->g(); //"A::g()"
    pb->f(); //"B::f()"
    pb->g(); //"C::g()"

    cout.width(5);
    cout.fill('#');
    cout << 135 << endl; //##135
    cout.fill('0');
    cout.width(5);
    cout << 135 << endl; //135
    cout.width(10);
    cout.setf(ios::left);
    cout << 135.79 << endl; //135.790000
    return 0;
}
*/

/*

某程序需要定义一个用户类，要求如下：（5分）
（1）用户类的成员变量包括id和密码，其中id为常量，在用户对象生存期间不能修改，密码不能通过用户对象直接访问。
（2）用户对象可以修改自己密码，但需要先验证旧密码是否正确。
（3）保证如下main()函数的执行结果为：false true

*/

class User
{
public:
    const int id;
    User(int _id, string _password) : id(_id), password(_password) {}
    bool changePwd(string _odlpassword, string _newword);

private:
    string password;
};

bool User::changePwd(string _odlpassword, string _newword)
{
    if (_odlpassword == password)
    {
        password = _newword;
        return true;
    }
    else
    {
        return false;
    }
}

// int main()
// {
//     User user(1001, "123456");
//     cout << boolalpha << user.changePwd("123", "863973") << " ";
//     cout << boolalpha << user.changePwd("123456", "863973");
//     return 0;
// }

/**
 * 47.定义一个日志管理类，实现如下功能：（10分）
（1）将单条日志信息追加到二进制日志文件e:\log.dat中。日志信息包括：日志序号（整型）、日志类型（整型）和日志内容（字符串，长度不大于100字节）。
（2）计算日志文件中日志的数量。
（3）从日志文件中读取最近的10条日志，显示到屏幕上。如果不足10条，则全部显示。
*/

class LogM
{
public:
    int seq, logtype;
    char content[100];
    void addLogM();
    void readLogM();
    void showLogM();
};

void LogM::addLogM(int seq, int logtype, char content)
{
     fstream outfile;
     outfile.open("e:\\log.dat", ios::out);
     if (!outfile)
        cout<<"file2.txt can't open .\n";
    outfile.write(seq, logtype, content);
    outfile.close;
}