#include <stdio.h>
#include <stdlib.h>

/**
 * 线性表的定义及基本运算
*/

#define MAX_SIZE 100 //线性表最大长度

//线性表结构体
typedef struct {
    int data[MAX_SIZE];
    int length;
} List;

//初始化线性表
void initList (List *list) {
    list->length = 0;
}

//指定位置增加元素
void insertElement (List *list, int index, int element) {
    if (list->length == MAX_SIZE) {
        printf("List id full\n");
        exit(1);
    }
    if (index < 0 || index > list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    for (int i = list->length; i > index; i--) {
        list->data[i] = list->data[i-1];
    }
    list->data[index] = element;
    list->length++;
}

//删除指定位置元素
void deleteElement(List *list, int index) {
    if (index < 0 || index > list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    //将删除位置后的元素前移动一位
    for (int i = index; i < list->length - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    //线性表长度减1
    list->length--;
}

//查询指定位置元素
int getElement (List *list, int index) {
    if (index < 0 || index >= list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    return list->data[index];
}

int getElement2 (List *list, int index) {
    if (index < 0 || index >= list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    return list->data[index];
}

// 修改元素
void modifyElement (List *list, int index, int element) {
    if (index < 0 || index >= list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    list->data[index] = element;
}

int main() {
    List list;
    initList(&list); 

    //插入元素
    insertElement(&list, 0, 1);
    insertElement(&list, 1, 2);
    insertElement(&list, 2, 3);
    insertElement(&list, 3, 4);


    printf("Element in the list: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.data[i]);
    }
    printf("\n");


    //删除元素
    deleteElement(&list, 0);

    printf("Element in the list after deletion: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.data[i]);
    }
    printf("\n");

    //修改
    modifyElement(&list, 0, 10);
    printf("Element in the list after modify: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.data[i]);
    }
    printf("\n");


    //查询
    int index = 0; // 要查询的元素下标
    int a = getElement(&list, index);
    printf("a = %d", a);

    return 0;
}