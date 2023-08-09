/*
    程序设计题     Pdf-p249
    1. 交通工具包含汽车，汽车又包含轿车，轿车又包含某个品牌的轿车。以此为例，设计表示层次关系的各个类，为每个类设计必要的成员变量和成员函数。
*/
#include <iostream>
using namespace std;

/**
 * 交通工具类（Trans）（汽车、轮船、飞机）     成员变量： 价格、交通方式、名称；成员函数：打印名称、价格
 * 汽车（Cars）（公交车、大巴、货车）          成员变量： 价格、交通方式、名称、分类名称；成员函数：打印名称、价格、分类名称
 * 轿车（Car）                              成员变量： 价格、交通方式、名称、分类名称、动力方式；成员函数：打印名称、价格、分类名称、动力方式
 * 品牌汽车（BrandCar）                     成员变量： 价格、交通方式、名称、分类名称、动力方式、品牌名称；成员函数：打印名称、价格、分类名称、动力方式、品牌名称
 */

class Trans
{
public:
    float price;
    string transType;
    string name;
    Trans();
    Trans(string _type, string _name, float _price);
    void printInfo();
    void setInfo(string _type, string _name, float _price);
    ~Trans();
};
Trans::Trans()
{
    cout << "交通工具类默认构造函数" << endl;
}
Trans::Trans(string _type, string _name, float _price) : transType(_type), name(_name), price(_price)
{
    cout << "交通工具类带3个参数构造函数" << endl;
}
void Trans::setInfo(string _type, string _name, float _price)
{
    transType = _type;
    name = _name;
    price = _price;
}
void Trans::printInfo()
{
    cout << "交通工具类打印：" << name << "\t价格：" << price << endl;
}
Trans::~Trans()
{
    cout << "交通工具类析构函数~" << endl;
}

class Cars : public Trans
{
public:
    string classfilyName;
    Cars()
    {
        classfilyName = "汽车";
        Trans::setInfo("交通工具汽车", "公路交通", 20000.34);
    }
    Cars(string _type, string _name, float _price, string _cname);
    void printInfo();
};
Cars::Cars(string _type, string _name, float _price, string _cname)
{
    classfilyName = _cname;
    Trans(_type, _name, _price);
}
void Cars::printInfo()
{
    Trans::printInfo();
    cout << "交通分类名称：" << classfilyName << endl;
}

class Car : public Cars
{
public:
    string powerType;
    Car() : powerType("oil") {}
    Car(string _type, string _name, float _price, string _cname, string _p);
    void printInfo();
};
Car::Car(string _type, string _name, float _price, string _cname, string _p)
{
    powerType = _p;
    Cars(_type, _name, _price, _cname);
}
void Car::printInfo()
{
    Cars::printInfo();
    cout << "动力类型：" << powerType << endl;
}

class BrandCar : public Car
{
public:
    string brandName;
    BrandCar(string _bn) : brandName(_bn) {}
    BrandCar(string _type, string _name, float _price, string _cname, string _p, string _bn);
    void printInfo();
};
BrandCar::BrandCar(string _type, string _name, float _price, string _cname, string _p, string _bn)

{
    brandName = _bn;
    Car(_type, _name, _price, _cname, _p);
}
void BrandCar::printInfo()
{
    Car::printInfo();
    cout << "汽车品牌：" << brandName << endl;
}

int main()
{
    BrandCar brand("特斯拉");
    brand.printInfo();
    return 0;
}