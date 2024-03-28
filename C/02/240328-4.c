// 队列的链接实现

#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct Node
{
    int data;          // 数据域，存放节点的数据
    struct Node *next; // 指针域，指向下一个节点的指针
} Node;

// 定义队列结构体
typedef struct
{
    Node *front; // 头部指针，指向队列的第一个节点
    Node *rear;  // 尾部指针，指向队列的最后一个节点
} Queue;

// 初始化队列
void initQueue(Queue *queue)
{
    queue->front = NULL; // 头部指针为空，表示空队列
    queue->rear = NULL;  // 尾部指针为空
}

// 入队操作
void enqueue(Queue *queue, int element)
{
    // 创建新节点
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = element;
    newNode->next = NULL;
    // 如果队列为空，则新节点既是头部节点又是尾部节点
    if (queue->front == NULL)
    {
        queue->front = newNode;
        queue->rear = newNode;
    }
    else
    {
        // 将新节点添加到链表尾部，并更新尾部指针
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

// 出队操作
int dequeue(Queue *queue)
{
    // 判断队列是否为空
    if (queue->front == NULL)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    // 移除头部节点，并返回其数据元素
    int element = queue->front->data;
    Node *temp = queue->front;
    queue->front = queue->front->next;
    free(temp);
    // 如果队列为空，则同时更新尾部指针
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }
    return element;
}

// 获取队头元素
int front(Queue *queue)
{
    // 判断队列是否为空
    if (queue->front == NULL)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    // 返回头部节点的数据元素
    return queue->front->data;
}

// 判空操作
int isEmpty(Queue *queue)
{
    return queue->front == NULL;
}

// 获取队列长度
int size(Queue *queue)
{
    int count = 0;
    Node *current = queue->front;
    // 遍历链表并计数
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

int main()
{
    Queue queue;
    initQueue(&queue); // 初始化队列

    // 入队操作
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    // 出队操作
    printf("Dequeued element: %d\n", dequeue(&queue));

    // 获取队头元素
    printf("Front element: %d\n", front(&queue));

    // 获取队列长度
    printf("Queue size: %d\n", size(&queue));

    return 0;
}