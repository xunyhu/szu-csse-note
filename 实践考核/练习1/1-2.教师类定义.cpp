#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
	string name, sex, sub, zhiwei, zhiwu, xueli, addr, pho;

public:
	void set(string name1, string sex1, string sub1, string zhiwei1, string zhiwu1, string xueli1, string addr1, string pho1)
	{
		name = name1;
		sex = sex1;
		sub = sub1;
		zhiwei = zhiwei1;
		zhiwu = zhiwu1;
		xueli = xueli1;
		addr = addr1;
		pho = pho1;
	}
	void print()
	{
		cout << name << " " << sex << " " << sub << " " << zhiwei << " "
			 << zhiwu << " " << xueli << " " << addr << " " << pho << endl;
	}
};

int main()
{
	int t;
	Teacher tt;
	string ch1, ch2, ch3, ch4, ch5, ch6, ch7, phon;
	cin >> t;
	while (t--)
	{
		cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5 >> ch6 >> ch7 >> phon;
		tt.set(ch1, ch2, ch3, ch4, ch5, ch6, ch7, phon);
		tt.print();
	}
	return 0;
}