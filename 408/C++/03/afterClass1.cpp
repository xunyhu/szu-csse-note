#include <iostream>
using namespace std;

class Base
{
private:
    int m;

public:
    Base(){};
    Base(int a) : m(a) {}
    int get()
    {
        return m;
    }
    void set(int a)
    {
        m = a;
    }
};

/**
 * 指针数组：指针数组可以说成是”指针的数组”，首先这个变量是一个数组，其次，”指针”修饰这个数组，意思是说这个数组的所有元素都是指针类型，在32位系统中，指针占四个字节。
   数组指针：数组指针可以说成是”数组的指针”，首先这个变量是一个指针，其次，”数组”修饰这个指针，意思是说这个指针存放着一个数组的首地址，或者说这个指针指向一个数组的首地址。
    ————————————————
    版权声明：本文为CSDN博主「men_wen」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
    原文链接：https://blog.csdn.net/men_wen/article/details/52694069
*/

int main()
{
    Base *ptr = new Base[2];
    ptr->set(30);
    ptr = ptr + 1;
    ptr->set(50);
    Base a[2] = {1, 9};
    cout << a[0].get() << "," << a[1].get() << endl; // 1, 9
    cout << ptr->get() << ",";                       
    ptr = ptr - 1;
    cout << ptr->get() << endl; 
    delete[] ptr;
    return 0;
}