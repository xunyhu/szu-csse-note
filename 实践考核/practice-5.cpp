/**
 *
 *
    题目描述

    已知宠物类Pet，包含私有数据成员：类型(字符串)、编号（整数）；成员函数自行设计

    宠物猫类Cat和宠物狗类Dog都是类Pet的派生类

    类Cat增加数据成员：姓名(字符串)、食物(字符串)，成员函数新增输出函数print，其他成员函数自行设计。

    其中函数print输出类Cat对象的基本信息和食物信息，输出格式参考样例

    类Dog增加数据成员：姓名(字符串)、犬大小(int)，成员函数新增输出函数print，其他成员函数自行设计

    其中函数print输出类Dog对象的基本信息，并且会根据犬大小值的1\2\3对应输出small\medium\big，输出格式参考样例

    要求：

    （1）主函数必须通过对象调用print函数来实现宠物信息输出，不得通过其他方法来输出宠物信息

    （2）必须实现上述三个类的继承机制


    输入

    第一行输入t表示有t个宠物

    接着输入t行，每行包含5个参数，含义如下：

    第一个参数是单个大写字母表示宠物类型（C表示宠物猫，D表示宠物狗）

    如果是宠物猫，接着的四个参数分别是：类型、编号、姓名、食物

    如果是宠物猫，接着的四个参数分别是：类型、编号、姓名、犬大小


    输出
    输出2t行
    每个宠物对象必须通过调用函数print进行输出，每次print函数输出两行，一行输出宠物的基本信息，一行输出不同类型宠物的特定信息

    具体输出参考样例
    输入：C Cat 10001 mimi fish
    输出：
    Cat's ID=10001
    mimi likes fish
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