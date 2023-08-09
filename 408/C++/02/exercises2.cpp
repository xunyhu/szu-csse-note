#include <iostream>
using namespace std;

/*
class Test
{
private:
    int x, y;
public:
    void fun(int i, int j)
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout<<"x="<<x;
        if (y>0) cout<<",y="<<y;
        cout<<endl;
    }
};


int main()
{
    Test a;
    a.fun(1, 10);
    a.show();
    a.fun(2, -1);
    a.show();
    return 0;
}
*/


/*
class A
{
    public:
        int a, b;
    private:
        int c, d;
    public:
        int getc();
};

int A::getc()
{
    return c;
}

int main()
{
    A onea;
    cout<<onea.a<<','<<onea.getc()<<endl;
    return 0;
}
*/

class  MyClassType1
{
private:
    /* data */
    int x, y;
public:
     int getx()
     {
        return x;
     }
     int gety();
     void setx(int x0)
     {
        x = x0;
     }
     void sety(int y0);
     void displayx()
     {
        cout<<"x="<<x<<endl;
     }
     void displayy()
     {
        cout<<"y="<<y<<endl;
     }
    ~ MyClassType1();
};

int MyClassType1:: gety(/* args */)
{
    return y;
}

void MyClassType1:: sety(int y0)
{
    y = y0;
}

 MyClassType1::~ MyClassType1()
{
}

int main()
{
    MyClassType1 obj1, *p, objArr[10];
    obj1.setx(111);
    cout<<obj1.getx()<<endl;
    obj1.displayx();

    p = new MyClassType1;
    (*p).setx(56);
    p->setx(78);
    int k = (*p).getx();
    int m = p->gety();
    cout<<"k="<<k<<endl;
    cout<<"m="<<m<<endl;

    for (int i=0; i<5; i++)
    {
        objArr[i].setx(i+10);
        objArr[i].sety(i+20);
    }
    p = &objArr[9];
    while (p>=&objArr[5])
    {
        p->setx(88);
        p->sety(99);
        p--;
    }
    for (int i=0; i<10; i++)
    {
        cout<<objArr[i].getx()<<"   "<<objArr[i].gety()<<endl;
    }
    
    return 0;
}
