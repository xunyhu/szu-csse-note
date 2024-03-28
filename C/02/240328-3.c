// 队列的顺序实现

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// 定义队列结构体
typedef struct
{
    int data[MAX_SIZE]; // 用数组存储队列元素
    int front;          // 头部指针，指向队列的第一个元素
    int rear;           // 尾部指针，指向队列的最后一个元素的下一个位置
} Queue;

// 初始化队列
void initQueue(Queue *queue)
{
    queue->front = 0; // 头部指针指向队列的起始位置
    queue->rear = 0;  // 尾部指针也指向队列的起始位置
}

// 入队
void enqueue(Queue *queue, int element)
{
    // 判断队列是否已满
    if ((queue->rear + 1) % MAX_SIZE == queue->front)
    {
        printf("Queue is full\n");
        exit(1);
    }
    // 将新元素添加到队列尾部
    queue->data[queue->rear] = element;
    queue->rear = (queue->rear + 1) % MAX_SIZE; // 更新尾部指针
}

// 出队操作
int dequeue(Queue *queue)
{
    // 判断队列是否为空
    if (queue->front == queue->rear)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    // 移除队列头部元素并更新头部指针
    int element = queue->data[queue->front];
    queue->front = (queue->front + 1) % MAX_SIZE;
    return element;
}

// 获取队头元素
int front(Queue *queue)
{
    // 判断队列是否为空
    if (queue->front == queue->rear)
    {
        printf("Queue is empty\n");
        exit(1);
    }
    // 返回队头元素
    return queue->data[queue->front];
}

// 判空操作
int isEmpty(Queue *queue)
{
    return queue->front == queue->rear;
}

// 获取队列长度
int size(Queue *queue)
{
    return (queue->rear - queue->front + MAX_SIZE) % MAX_SIZE;
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