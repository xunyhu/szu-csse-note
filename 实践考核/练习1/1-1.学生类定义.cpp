#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name, num, xueyuan;
	string zhuanye, xinbie, address, phone;

public:
	void set()
	{
		cin >> name >> num >> xueyuan >> zhuanye >> xinbie >> address >> phone;
	}
	void print()
	{
		cout << name << " " << num << " " << xueyuan << " "
			 << zhuanye << " " << xinbie << " " << address << " " << phone << endl;
	}
};
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Student stu;
		stu.set();
		stu.print();
	}
	return 0;
}
