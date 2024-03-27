//循环链表

#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

typedef struct {
    ListNode *head;
    int length;
} CircularLinkedList;

void initCircularLinkedList (CircularLinkedList *list) {
    list->head = NULL; // 头指针为空，表示空循环链表
    list->length = 0;
}

//在循环链表的末尾增加元素
void insertElement (CircularLinkedList *list, int element) {
    //创建新节点
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = element;
    newNode->next = NULL;
    //如果循环链表为空，则新节点即为头节点
    if (list->head == NULL) {
        list->head = newNode;
        newNode->next = newNode; //将尾节点的指针指向头节点，形成循环
    } else {
        ListNode *current = list->head;
        //找到尾节点
        while (current->next != list->head)
        {
            current = current->next;
        }
        //将新节点插入到尾节点之后
        current->next = newNode;
        newNode->next = list->head; //将新节点的指针指向头节点，形成循环
    }
    //链表长度+1
    list->length++;
}

//删除循环链表指定位置的元素
void deleteElement (CircularLinkedList *list, int index) {
    if (index < 0 || index >= list->length) {
        printf("Index out of range\n");
        exit(1);
    }
    ListNode *temp;
    //删除头节点
    if (index == 0) {
        temp = list->head;
        //找到尾节点
        ListNode *current = list->head;
        while (current->next != list->head)
        {
            current = current->next;
        }
        //将尾节点的指针指向第二个节点
        current->next = list->head->next;
        //更新头指针
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
    //释放被删除的节点的内存
    free(temp);
    list->length--;
}

// 获取循环链表指定位置的元素
int getElement(CircularLinkedList *list, int index) {
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
    CircularLinkedList list;
    initCircularLinkedList(&list);  // 初始化循环链表

    // 在循环链表末尾插入元素
    insertElement(&list, 1);
    insertElement(&list, 2);
    insertElement(&list, 3);

    // 输出循环链表中的元素
    printf("Elements in the list: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", getElement(&list, i));
    }
    printf("\n");

    // 删除循环链表中的第二个元素
    deleteElement(&list, 1);

    // 输出删除后的循环链表中的元素
    printf("Elements in the list after deletion: ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", getElement(&list, i));
    }
    printf("\n");

    return 0;
}