#include <stdio.h>
#include <stdlib.h>

/**
 * 线性表的链式存储——单链表
 * 
    单链表是一种常见的链式存储结构，由一系列节点组成，每个节点包含一个数据域和一个指针域，指向下一个节点
*/

#define MAX_SIZE 100

//定义单链表节点结构体
typedef struct {
    int data;   //数据域，存储节点的数据
    struct ListNode *next;  //指针域，指向下一个节点的指针
} ListNode;

//定义单链表结构体
typedef struct {
    ListNode *head;  //头指针，指向链表的第一个节点
    int length; //链表长度
} LinkedList;

//初始化单链表
void initLinkedList(LinkedList *list) {
    list->head = NULL;  //头指针为空，表示空链表
    list->length = 0;  //链表长度为0
}

//指定位置插入元素
void insertElement (LinkedList *list, int index, int element) {
    if (index < 0 || index > list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    //创建新节点
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = element;
    newNode->next = NULL;
    //在链表头部插入新结点
    if (index == 0) {
        ListNode *current = list->head;
        //找到插入位置的前一个结点
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        //插入新节点
        newNode->next = current->next;
        current->next = newNode;
    }
    //链表长度加1
    list->length++;
}