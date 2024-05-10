/**
 *
 *
    题目描述

    老百姓在政府部门办理事项时（例如港澳通行证、出国旅游，户口办理等），会得到一个服务流水号。每天成千上万的老百姓来办理事情，因此要对服务流水号进行管理。现在使用顺序表来管理这些服务流水号，操作包括：

    1.创建一张顺序表，保存已有的服务流水号

    2.使用顺序表的插入操作，实现一个新流水号的插入

    3.使用顺序表的删除操作，实现一个流水号的删除

    --算法说明--

    顺序表：一维数据数组、最大长度、实际长度

    插入操作：将位置i和后面的数据全部后移一位，在指定位置i插入一个数据，实际长度加1

    删除操作：先找到要删除元素的位置i，将位置i+1和后面的数据全部前移一位，实际长度减1

    顺序表位置从1开始

    --程序要求--

    若使用C++只能include一个头文件iostream；若使用C语言只能include一个头文件stdio

    程序中若include多过一个头文件，不看代码，作0分处理

    不允许使用第三方对象或函数实现本题的要求


    输入

    第一行输入t表示有t个测试实例，

    每个实例包含3行输入：

    第1行：数字n表示流水号数量，后跟n个整数表示流水号，数据之间用单个空格隔开

    第2行：新流水号的插入位置、新流水号

    第3行：要删除的流水号




    输出

    每个测试实例输出两行

    第1行输出插入新流水号后的顺序表

    第2行输出删除流水号后的顺序表；若要删除的流水号不存在，则输出ERROR，无需输出顺序表

    每行输出数据之间用单个空格隔开，末尾数据后面无空格

    输入输出示例：
    输入：
    2
    5 11 22 33 44 55
    6 111
    22
    4 999 888 777 666
    3 100
    333
    输出：
    11 22 33 44 55 111
    11 33 44 55 111
    999 888 100 777 666
    ERROR
*/
#include <iostream>
using namespace std;

// 定义顺序表结构体
struct SeqList
{
    int data[100]; // 顺序表数组
    int maxLength; // 顺序表最大长度
    int length;    // 顺序表当前长度
};

// 创建顺序表
void createSeqList(SeqList &list, int n)
{
    list.maxLength = 100;
    list.length = n;
    for (int i = 0; i < n; ++i)
    {
        cin >> list.data[i];
    }
}

// 插入新流水号
void insertSeqList(SeqList &list, int pos, int num)
{
    if (list.length >= list.maxLength)
    {
        cout << "ERROR" << endl;
        return;
    }
    if (pos < 1 || pos > list.length + 1)
    {
        cout << "ERROR" << endl;
        return;
    }
    for (int i = list.length; i >= pos; --i)
    {
        list.data[i] = list.data[i - 1];
    }
    list.data[pos - 1] = num;
    list.length++;
}

// 删除流水号
void deleteSeqList(SeqList &list, int num)
{
    int pos = -1;
    for (int i = 0; i < list.length; ++i)
    {
        if (list.data[i] == num)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << "ERROR" << endl;
        return;
    }
    for (int i = pos; i < list.length - 1; ++i)
    {
        list.data[i] = list.data[i + 1];
    }
    list.length--;
}

// 输出顺序表
void printSeqList(const SeqList &list)
{
    for (int i = 0; i < list.length; ++i)
    {
        cout << list.data[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        SeqList list;
        int n;
        cin >> n;
        createSeqList(list, n);

        int pos, num;
        cin >> pos >> num;
        insertSeqList(list, pos, num);

        int delNum;
        cin >> delNum;
        deleteSeqList(list, delNum);

        printSeqList(list);
    }

    return 0;
}
