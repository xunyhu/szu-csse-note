#include <iostream>
#include <string>
using namespace std;

class Pet
{
protected:
	string stype;
	int ID;

public:
	Pet(string st, int ti)
	{
		stype = st;
		ID = ti;
	}
};

class Cat : public Pet
{
protected:
	string sname;
	string food;

public:
	Cat(string st, int ti, string tsn, string tf) : Pet(st, ti)
	{
		sname = tsn, food = tf;
	}
	void print()
	{
		cout << stype << "'s ID=" << ID << endl;
		cout << sname << " likes " << food << endl;
	}
};

class Dog : public Pet
{
protected:
	string sname;
	int tsize;

public:
	Dog(string st, int ti, string tsn, int ts) : Pet(st, ti)
	{
		sname = tsn, tsize = ts;
	}
	void print()
	{
		cout << stype << "'s ID=" << ID << endl;
		cout << sname << " is ";
		if (tsize == 1)
			cout << "small";
		if (tsize == 2)
			cout << "medium";
		if (tsize == 3)
			cout << "big";
		cout << endl;
	}
};

int main()
{
	int t;
	char op;
	string ts, tname, tfood;
	int ti, csize;
	cin >> t;
	while (t--)
	{
		cin >> op;
		if (op == 'C')
		{
			cin >> ts >> ti >> tname >> tfood;
			Cat cc(ts, ti, tname, tfood);
			cc.print();
		}
		if (op == 'D')
		{
			cin >> ts >> ti >> tname >> csize;
			Dog dd(ts, ti, tname, csize);
			dd.print();
		}
	}

	return 0;
}