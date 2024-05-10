/**
 *
 *
   题目描述

    为了方便管理，需要对学生学号进行排序。现使用顺序表存储服务流水号，采用直接插入排序法对学号进行递增排序

    --算法说明--

    1、当插入第i(i≥1)个数据时,假设前面的0到i-1个数据已经排好序

    2、用第i个数据与第i-1、i-2,…的数据顺序进行比较(和顺序查找类似)，如果小于，则将第x（x<=i-1）个数据向后移动(插入位置后的记录向后顺移)

    3、找到插入位置即将第i个数据插入

    --程序要求--

    必须使用直接插入排序法实现本题的要求

    不允许使用第三方对象或函数实现本题的要求


    输入
    第一行输入t表示有t个测试实例

    每个实例对应一行输入，先输入数字n表示学号数量，后跟n个整数表示n个学号，数据之间用单个空格隔开


    输出
    每个测试实例输出3行，对应第1趟、第2趟和最终的排序结果

    每行输出数据之间用单个空格隔开，末尾数据后面无空格

    提示：在第一趟排序时，因为已排序表为空，所以第一个数据直接插入无比较。所以第一趟排序结果就是原始数据序列。

    输入输出示例：
    输入：
    2
    6 21 20 48 25 16 8
    6 22 44 33 66 55 11
    输出：
    21 20 48 25 16 8
    20 21 48 25 16 8
    8 16 20 21 25 48
    22 44 33 66 55 11
    22 44 33 66 55 11
    11 22 33 44 55 66
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
