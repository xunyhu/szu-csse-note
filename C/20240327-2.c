/**
 * 双向循环链表
 * 双向循环链表是一种特殊的链式存储结构，每个节点包含两个指针域，分别指向前一个节点和后一个节点，形成一个环形结构。双向循环链表可以通过任意节点进行双向遍历，而不必从头节点开始或从尾节点结束。
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode *prev;
    struct ListNode *next;
} ListNode;


typedef struct {
    ListNode *head;  //头指针，指向双向循环链表的第一个节点
    int length;
} DoubleCircularLinkedList;

void initDoubleCircularLinkedList (DoubleCircularLinkedList *list) {
    list->head = NULL;
    list->length = 0;
}

//在双向循环列表末尾添加元素
void insertElement(DoubleCircularLinkedList *list, int element) {
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation faild\n");
        exit(1);
    }
    newNode->data = element;
    newNode->prev = NULL;
    newNode->next = NULL;
    //如果双向链表为空，则新节点即为头节点
    if (list->head == NULL) {
        list->head = newNode;
        newNode->prev = newNode;
        newNode->next = newNode;
    } else {
        ListNode *tail = list->head->prev; //尾节点
        //将新节点插入到尾节点之后
        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = list->head;
        list->head->prev = newNode;
    }
    list->length++;
}