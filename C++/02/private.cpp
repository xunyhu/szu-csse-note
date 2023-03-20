#include <iostream>
using namespace std;

/**
 * 类成员的可访问范围
 * public，公有，使用它修饰的类的成员可以在程序的任何地方被访问。
 * private，私有，使用它修饰的类的成员仅能在本类内被访问。
 * protected，保护的，它的作用介于public与private之间，使用它修饰的类的成员能在本类内及子类中被访问。
*/

class Box
{
    public:
        double length;
        void setWidth(double wid);
        double getWidth();
        void setHeight(double wid);
        double getHeight();
    private:
        double width;
    protected:
        double height;
};
void Box::setWidth(double wid)
{
    width = wid;
}
double Box::getWidth()
{
    return width;
}
void Box::setHeight(double wid)
{
    height = wid;
}
double Box::getHeight()
{
    return height;
}

class CEmployee
{
    private:
        string szName;
        int salary;
    public:
        void setName(string);
        string getName();
        void setSalary(int);
        int getSalary();
        int averageSalary(CEmployee);
};
void CEmployee::setName(string name)
{
    szName = name;
}
string CEmployee::getName()
{
    return szName;
}
void CEmployee::setSalary(int s)
{
    salary = s;
}
int CEmployee::getSalary()
{
    return salary;
}
int CEmployee::averageSalary(CEmployee cemp)
{
    return (salary + cemp.salary)/2;
}

int main()
{
    Box box;
    //不使用成员函数设置长度
    box.length = 10.0;
    cout<<"Length of box:"<<box.length<<endl;
    // box.width = 10.0; //报错，因为width是私有的
    box.setWidth(10.0);
    // cout<<"Width of box:"<<box.width<<endl;  //报错 不能直接用box.width
    cout<<"Width of box:"<<box.getWidth()<<endl;
    // box.height = 18.0; //报错
    box.setHeight(18.0);
    cout<<"Height of box:"<<box.getHeight()<<endl;

    CEmployee eT, eY;
    eT.setName("Tom");
    eT.setSalary(5000);
    eY.setName("Jack");
    eY.setSalary(6000);
    cout<<eY.getName()<<endl;
    cout<<"aver="<<eT.averageSalary(eY)<<endl;
    return 0;
}