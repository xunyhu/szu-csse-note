/*
    假设学生档案信息是线性表，每位学生信息包括学号、姓名、性别、年龄、入学成绩，每位学生信息构成一个节点。有5个节点如下：
    (
        (1001, 王韬, 男, 20, 589),
        (1002, 潘小欣, 女, 21, 580),
        (1003, 张艳, 女, 19, 568),
        (1004, 赵李军, 男, 18, 580),
        (1005, 刘勇, 男, 22, 585),
    )


    给出以下基本运算：
    1）初始化 Initiate。建立一个空表 L = ()，L 不含数据元素。
    2）求表长 Length。
    3）读表元素 Get(L, i)。返回线性表第 i 个数据元素，当 i 不满足 1<= i <= Length(L) 时，返回一个特殊值。
    4）插入 Insert(L, x, i)。
    5）定位 Locate(L, x)。查找线性表中数据元素值等于 x 的结点序号，若有多个数据元素值与 x 相等，运算结果为这些结点序号中的最小值，若找不到该结点，则运算结果为 0 。
    6）删除 Delete(L, i)。
*/

#include <stdio.h>
#include <stdlib.h>


/**
 *  顺序存储实现
*/

const int MaxSize = 100;    //预先定义数组大小

//定义结点的类型
typedef struct 
{
    int num;        //学号
    char name[8];   //姓名
    char sex[2];    //性别
    int age;        //年龄
    int score;      //入学成绩
} DataType;         

//顺序表的类型
typedef struct {
    DataType data[MaxSize];     //存放数据的数组
    int length;                 //线性表的实际长度
} SeqList;

//插入运算
void InsertSeqlist(SeqList L, DataType x, int i)
{
    if (L.length == MaxSize)    exit("表已满");
    if (i < 1 || i > L.length)  exit("位置错");
    for (int j = L.length; j >= i; j--) 
        L.data[j] = L.data[j-1];    //依次后移一位
    L.data[i - 1] = x;
    L.length++;                     //表长度加 1
}

//删除
void DeleteSeqlist(SeqList L, int i)
{
    if (i < 1 || i > L.length)  exit("位置错");
    for (int j = i; j < L.length; j++)
        L.data[j] = L.data[j+1];        //依次前移一位
    L.length--;                         //表长度减 1
}