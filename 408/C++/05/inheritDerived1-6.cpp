#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
/**
 * 假设公司雇员(employee)、经理(manager)、工程师(engineer) 和高级主管(director)。各类的属性如下：
 * 雇员(employee)类：姓名、年龄、工资；
 * 经理(manager)类：姓名、年龄、工资、行政级别；
 * 工程师(engineer)类：姓名、年龄、工资、专业、学位；
 * 高级主管(director)类：姓名、年龄、工资、行政级别、职务；
 */

class employee
{
    short age;
    float salary;

protected:
    string name;

public:
    employee(short ag, float sa, string na)
    {
        age = ag;
        salary = sa;
        name = na;
    }
    void print()
    {
        cout << "\n"
             << name << ":\t";
        cout << age << ":\t";
        cout << salary;
    }
    ~employee() {}
};

class manager : public employee
{
    int level;

public:
    manager(short ag, float sa, string na, int lev) : employee(ag, sa, na)
    {
        level = lev;
    }
    void print()
    {
        employee::print();
        cout << "\tlevel:" << level;
    }
};

class engineer : public employee
{
    char speciality, adegree;

public:
    engineer(short ag, float sa, string na, char spe, char ade) : employee(ag, sa, na)
    {
        speciality = spe;
        adegree = ade;
    }
    void print()
    {
        employee::print();
        cout << "\tspeciality:" << speciality;
        cout << "\tadegree:" << adegree;
    }
};

enum ptitle
{
    PS,
    GM,
    VPS,
    VGM
};
class director : public manager
{
    ptitle post;

public:
    director(short ag, float sa, string na, int lev, ptitle po) : manager(ag, sa, na, lev)
    {
        post = po;
    }
    void print()
    {
        manager::print();
        cout << "\tpost:" << post << endl;
    }
};

int
main()
{
    employee emp1(23, 610.5, "wang"), emp2(27, 824.75, "li");
    manager man1(32, 813.23, "zhang", 11), man2(34, 1200.1, "chen", 7);
    engineer eng(26, 1420.10, "sun", 'E', 'M');
    director dir(38, 1800.3, "liu", 2, VPS);
    emp1.print();
    emp2.print();
    man1.print();
    man2.print();
    man2.employee::print();
    eng.print();
    dir.print();
    return 0;
}