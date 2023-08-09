//
//  class-exercise.cpp
//  Code
//
//  Created by 胡瑞 on 2023/3/10.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//类成员访问控制 pubilc、private、protected
class Box
{
public:
    double length;
    void setWidth(double wid);
    double getWidth();
private:
    double width;
};

double Box::getWidth()
{
    return width;
}

void Box::setWidth(double wid)
{
    width = wid;
}

/**
int main() {
    Box box;
    box.length = 10.0;
    cout<<"Length of box:"<<box.length<<endl;
//    box.width = 10.1;
    box.setWidth(10.1);
    cout<<"Width of box:"<<box.getWidth()<<endl;
    return 0;
}
 */

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
    int averageSalary(CEmployee); //计算两人的平均工资
    string testName;
};
void CEmployee::setName(string name)
{
    szName = name;
}
string CEmployee::getName()
{
    return szName;
}
void CEmployee::setSalary(int mon)
{
    salary = mon;
}
int CEmployee::getSalary()
{
    return  salary;
}
int CEmployee::averageSalary(CEmployee e1)
{
    return (salary + e1.getSalary())/2;
}

int main()
{
    CEmployee eT,eY;
    eT.setName("Tom1234567");
    eT.setSalary(5000);
    cout<<eT.getName()<<endl;
    cout<<"aver="<<eT.averageSalary(eY)<<endl;
    eT.testName = "public test name";
    cout<<eT.testName<<endl;
    return 0;
}
