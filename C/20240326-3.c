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

// 在单链表的指定位置插入元素
void insertElement(LinkedList *list, int index, int element) {
    if (index < 0 || index > list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    // 创建新节点
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = element;
    newNode->next = NULL;
    // 在链表头部插入新节点
    if (index == 0) {
        newNode->next = list->head;
        list->head = newNode;
    } else {
        ListNode *current = list->head;
        // 找到插入位置的前一个节点
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        // 插入新节点
        newNode->next = current->next;
        current->next = newNode;
    }
    // 链表长度加1
    list->length++;
}

//删除单链表上的元素
void deleteElement (LinkedList *list, int index) {
    if (index < 0 || index > list->length) {
        printf("Index out of Range\n");
        exit(1);
    }
    ListNode *temp;
    //删除链表头部节点
    if (index == 0) {
        temp = list->head;
        list->head = list->head->next;
    } else {
        ListNode *current = list->head;
        //找到删除位置的前一个节点
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
    }
    //释放被删除节点的内存
    free(temp);
    //链表长度减1
    list->length--;
}

// 获取单链表指定位置的元素
int getElement(LinkedList *list, int index) {
    if (index < 0 || index >= list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    ListNode *current = list->head;
    // 找到指定位置的节点
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

int main() {
    LinkedList list;
    initLinkedList(&list);  // 初始化单链表

    // 在单链表末尾插入元素
    insertElement(&list, 0, 1);
    insertElement(&list, 1, 2);
    insertElement(&list, 2, 3);

    // 输出单链表中的元素
    printf("Elements in the list: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", getElement(&list, i));
    }
    printf("\n");

    // 删除单链表中的第二个元素
    deleteElement(&list, 1);

    // 输出删除后的单链表中的元素
    printf("Elements in the list after deletion: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", getElement(&list, i));
    }
    printf("\n");

    return 0;
}