#include <iostream>
using namespace std;

/*
    类的继承与派生
    第一节  类的继承与类的派生
*/
class CStudent  //学生类
{
private:
    string name;
    string id;
    char gender;
    int age;
public:
    void PrintInfo();
    void SetInfo(const string &, const string &, int, char);
    void SetName(string);
    string GetName();
    void SetId(string);
    string GetId();
};
void CStudent::PrintInfo()
{
    cout<<"姓名:\t"<<name<<endl;
    cout<<"学号:\t"<<id<<endl;
    cout<<"年龄:\t"<<age<<endl;
    cout<<"性别:\t"<<gender<<endl;
}
void CStudent::SetInfo(const string & name_, const string & id_, int age_, char gender_)
{
    name = name_;
    id = id_;
    age = age_;
    gender = gender_;
}
void CStudent::SetName(string name)
{
    this->name = name;
}
string CStudent::GetName()
{
    return name;
}
void CStudent::SetId(string id)
{
    this->id = id;
}
string CStudent::GetId()
{
    return id;
}

class CUndergrauateStudent:public CStudent //本科生类
{
private:
    string department; //学生所属系名
public:
    void PrintInfo();
    void SetInfo(const string &, const string &, int, char, const string &);
};
void CUndergrauateStudent::PrintInfo()
{
    CStudent::PrintInfo();
    cout<<"院系:\t"<<department<<endl<<endl;
}
void CUndergrauateStudent::SetInfo(const string & name_, const string & id_, int age_, char gender_, const string & department_)
{
    CStudent::SetInfo(name_, id_, age_, gender_);
    department = department_;
}

class CGraduatedStudent:public CStudent  //研究生类
{
private:
    string department;  //系名
    string advisor;  //导师
public:
    void PrintInfo();
    void SetInfo(const string &, const string &, int, char, const string &, const string &);
};
void CGraduatedStudent::PrintInfo()
{
    CStudent::PrintInfo();
    cout<<"院系:\t"<<department<<endl;
    cout<<"导师:\t"<<advisor<<endl<<endl;
}
void CGraduatedStudent::SetInfo(const string & name_, const string & id_, int age_, char gender_, const string & department_, const string &advisor_)
{
    CStudent::SetInfo(name_, id_, age_, gender_);
    department = department_;
    advisor = advisor_;
}

int main()
{
    CStudent s1;
    CUndergrauateStudent s2;
    CGraduatedStudent s3;
    s2.SetInfo("小张", "2018-6-2-4", 19, 'M', "数学系");
    s3.SetInfo("小李", "M2017-9", 23, 'F', "计算机学院", "孟教授");
    s2.PrintInfo();
    s3.PrintInfo();
    // cout<<s2.name<<endl; 不能直接访问基类中的私有成员变量
    cout<<s2.GetName()<<endl;
    s2.CStudent::PrintInfo();
    return 0;
}