/**
 *
38. 已知循环队列的结构类型如下：

```c
    typedef struct cycqueue
    {
    DataType data[maxsize];
    int front,rear;
    } CycQue;
    CycQue CQ;
```

    设计出队列的算法。
*/

int OutQueue(CycQue CQ)
{
    if (EmptyQueue(CQ))
    {
        error("队列空");
        return 0;
    }
    else
    {
        CQ.front = (CQ.front + 1) % maxsize;
        return 1;
    }
}
int EmptyQueue(CycQue CQ)
{
    if (CQ.rear == CQ.front)
        return 1;
    else
        return 0;
}

DataType dequeue(CycQue *cq)
{
    if (cq->front == cq->rear)
    {
        printf("队列已空，无法出队\n");
        exit(1); // 可以根据实际情况选择如何处理空队列的情况
    }

    DataType item = cq->data[cq->front];   // 获取队首元素
    cq->front = (cq->front + 1) % maxsize; // 移动队首指针
    return item;                           // 返回队首元素
}
