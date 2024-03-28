#include <stdio.h>
#include <stdlib.h>

/**
 * 线性表的顺序存储——数组
 */
#define MAX_SIZE 100

typedef struct
{
    /* data */
    int data[MAX_SIZE];
    int length;
} SeqList;

void initList(SeqList *list)
{
    list->length = 0;
}

int getElement(SeqList *list, int index)
{
    if (index < 0 || index >= list->length)
    {
        printf("Index out of range\n");
        exit(1);
    }
    return list->data[index];
}

void insertElement(SeqList *list, int index, int element)
{
    if (list->length == MAX_SIZE)
    {
        printf("List is full\n");
        exit(1);
    }
    if (index < 0 || index > list->length)
    {
        printf("Index out of range\n");
        exit(1);
    }
    // 将插入位置及其后面的元素后移一位
    for (int i = list->length; i > index; i--)
    {
        list->data[i] = list->data[i - 1];
    }
    list->data[index] = element;
    list->length++;
}

void deleteElement(SeqList *list, int index)
{
    if (index < 0 || index > list->length)
    {
        printf("Index out of range\n");
        exit(1);
    }
    // 将删除位置之后的元素前移一位
    for (int i = index; i < list->length; i++)
    {
        list->data[i] = list->data[i + 1];
    }
    list->length--;
}

// 在顺序表中查找指定元素的位置
int locateElement(SeqList *list, int element)
{
    for (int i = 0; i < list->length; i++)
    {
        if (list->data[i] == element)
        {
            return i; // 找到元素，返回位置
        }
    }
    return -1; // 未找到元素，返回-1
}

int main()
{
    SeqList list;
    initList(&list); // 初始化顺序表

    // 在顺序表末尾插入元素
    insertElement(&list, 0, 1);
    insertElement(&list, 1, 2);
    insertElement(&list, 2, 3);

    // 输出线性表中的元素
    printf("Elements in the list: ");
    for (int i = 0; i < list.length; i++)
    {
        printf("%d ", list.data[i]);
    }
    printf("\n");

    // 删除线性表中的第二个元素
    deleteElement(&list, 1);

    // 输出删除后的线性表中的元素
    printf("Elements in the list after deletion: ");
    for (int i = 0; i < list.length; i++)
    {
        printf("%d ", list.data[i]);
    }
    printf("\n");

    // 查找元素2在顺序表中的位置
    int index = locateElement(&list, 2);
    if (index != -1)
    {
        printf("Element 2 is found at index: %d\n", index);
    }
    else
    {
        printf("Element 2 is not found\n");
    }

    return 0;
}