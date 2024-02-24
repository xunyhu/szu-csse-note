/**
 *
 *
    题目描述

    定义一个食品类Food，含数据成员：编号(int)、单价(float)、品牌(字符串)，成员函数：

    1）有参构造，初始化数据成员，并输出构造信息。

    2）输出函数print，输出食品信息。

    3）析构函数，输出析构信息

    要求：主函数中要使用相应的对象、或对象指针、或对象引用来完成要求


    输入

    第一行输入t，表示t种食品

    接着输入t行，每行输入3个参数，分别表示编号、单价、品牌


    输出

    每个实例输出三行，包含一行构造输出、一行调用print函数输出，一行析构输出

    输出具体看示例
    输入：1001 2.3 yida
    输出：
    Food 1001 construct
    yida unit price is 2.3
*/

#include <iostream>
#include <string>
using namespace std;

// 宠物类定义
class Pet
{
private:
    string type;
    int id;

public:
    // 构造函数
    Pet(string t, int i) : type(t), id(i) {}

    // 输出函数
    virtual void print() const
    {
        cout << type << "'s ID=" << id << endl;
    }
};

// 宠物猫类定义
class Cat : public Pet
{
private:
    string name;
    string food;

public:
    // 构造函数
    Cat(string t, int i, string n, string f) : Pet(t, i), name(n), food(f) {}

    // 输出函数
    virtual void print() const override
    {
        Pet::print();
        cout << name << " likes " << food << endl;
    }
};

// 宠物狗类定义
class Dog : public Pet
{
private:
    string name;
    int size;

public:
    // 构造函数
    Dog(string t, int i, string n, int s) : Pet(t, i), name(n), size(s) {}

    // 输出函数
    virtual void print() const override
    {
        Pet::print();
        cout << name << " is ";
        switch (size)
        {
        case 1:
            cout << "small";
            break;
        case 2:
            cout << "medium";
            break;
        case 3:
            cout << "big";
            break;
        default:
            cout << "unknown";
            break;
        }
        cout << endl;
    }
};

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        char petType;
        string type;
        int id;
        string name;

        cin >> petType >> type >> id >> name;

        if (petType == 'C')
        {
            string food;
            cin >> food;
            Cat cat(type, id, name, food);
            cat.print();
        }
        else if (petType == 'D')
        {
            int size;
            cin >> size;
            Dog dog(type, id, name, size);
            dog.print();
        }
    }

    return 0;
}