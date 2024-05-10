/*
题目4.汽车类

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

输出
第一行输出创建有参对象car的信息
第二行输出无参对象car1的信息


样例输入
48900 17 225


样例输出
price=48900 CTyre.Radius=17 CTyre.Width=225
price=0 CTyre.Radius=0 CTyre.Width=0

后台输入
50010 16 185

后台输出
price=50010 CTyre.Radius=16 CTyre.Width=185
price=0 CTyre.Radius=0 CTyre.Width=0


*/

#include <iostream>
#include <string>
using namespace std;

class CTyre
{
public:
	CTyre()
	{
		radius = 0, width = 0;
	}
	CTyre(int r, int w)
	{
		radius = r, width = w;
	}
	int getRadius()
	{
		return radius;
	}
	int getWidth()
	{
		return width;
	}

private:
	int radius;
	int width;
};

class CCar
{
private:
	int price;
	CTyre tyre;

public:
	CCar() { price = 0; }
	CCar(int p, int tr, int tw)
		: price(p), tyre(tr, tw) {}
	int getPrice()
	{
		return price;
	}
	CTyre getCTyre()
	{
		return tyre;
	}
};

int main()
{
	int p, tr, tw;
	cin >> p >> tr >> tw;
	CCar car(p, tr, tw);
	cout << "price=" << car.getPrice();
	cout << " CTyre.Radius=" << car.getCTyre().getRadius();
	cout << " CTyre.Width=" << car.getCTyre().getWidth() << endl;

	CCar car1;
	cout << "price=" << car1.getPrice();
	cout << " CTyre.Radius=" << car1.getCTyre().getRadius();
	cout << " CTyre.Width=" << car1.getCTyre().getWidth() << endl;

	return 0;
}