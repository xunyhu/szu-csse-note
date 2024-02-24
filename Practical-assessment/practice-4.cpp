/**
 *
 *
    题目描述

    定义一个轮胎类CTyre，包含私有数据成员：半径和宽度，都是整数类型。公有函数包括
    1）无参构造，默认值均设置为0
    2）有参构造，根据参数设置半径和宽度
    3）半径的get方法
    4）宽度的get方法
    定义一个汽车类CCar，包含私有数据成员：价格和轮胎，价格是整数类型，轮胎是CTyre类型。公有函数包括
    1）无参构造，默认值均设置为0
    2）有参构造，根据参数设置
    3）价格的get方法
    4）轮胎的get方法
    主函数创建一个汽车对象，完成以下操作：
    1）输入价格、轮胎半径、轮胎宽度，根据参数创建有参的汽车对象car
    2）输出对象car的信息，要求使用上述的get方法
    3）创建无参的汽车对象car1
    4）输出对象car1的信息，要求使用上述的get方法

    输入

    输入只有一行，输入价格、轮胎半径、轮胎宽度，共3个参数
    示例：48900 17 225


    输出

    第一行输出创建有参对象car的信息
    第二行输出无参对象car1的信息
    示例：price=48900 CTyre.Radius=17 CTyre.Width=225
*/

#include <iostream>

// 轮胎类定义
class CTyre
{
private:
    int radius;
    int width;

public:
    // 无参构造函数，默认值均为0
    CTyre() : radius(0), width(0) {}

    // 有参构造函数，根据参数设置半径和宽度
    CTyre(int r, int w) : radius(r), width(w) {}

    // 半径的get方法
    int getRadius() const
    {
        return radius;
    }

    // 宽度的get方法
    int getWidth() const
    {
        return width;
    }
};

// 汽车类定义
class CCar
{
private:
    int price;
    CTyre tyre;

public:
    // 无参构造函数，默认值均为0
    CCar() : price(0), tyre() {}

    // 有参构造函数，根据参数设置价格和轮胎
    CCar(int p, int r, int w) : price(p), tyre(r, w) {}

    // 价格的get方法
    int getPrice() const
    {
        return price;
    }

    // 轮胎的get方法
    const CTyre &getTyre() const
    {
        return tyre;
    }
};

int main()
{
    int price, radius, width;
    std::cin >> price >> radius >> width;

    // 创建有参对象car
    CCar car(price, radius, width);

    // 输出有参对象car的信息
    std::cout << "price=" << car.getPrice() << " CTyre.Radius=" << car.getTyre().getRadius() << " CTyre.Width=" << car.getTyre().getWidth() << std::endl;

    // 创建无参对象car1
    CCar car1;

    // 输出无参对象car1的信息
    std::cout << "price=" << car1.getPrice() << " CTyre.Radius=" << car1.getTyre().getRadius() << " CTyre.Width=" << car1.getTyre().getWidth() << std::endl;

    return 0;
}