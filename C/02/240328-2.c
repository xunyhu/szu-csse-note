// 栈的链接实现

#include <stdio.h>
#include <stdlib.h>

// 定义链表节点结构体
typedef struct Node
{
    int data;          // 数据域，存储节点的数据
    struct Node *next; // 指针域，指向下一个节点的指针
} Node;

// 定义栈结构体
typedef struct
{
    Node *top; // 栈顶指针，指向栈顶结点
} Stack;

// 初始化栈
void initStack(Stack *stack)
{
    stack->top = NULL; // 栈顶指针为空，表示空栈
}

// 压栈操作
void push(Stack *stack, int element)
{
    // 创建新节点
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = element;
    // 将新节点添加到链表的头部，并更新栈顶指针
    newNode->next = stack->top;
    stack->top = newNode;
}

// 弹栈操作
int pop(Stack *stack)
{
    // 判断栈是否为空
    if (stack->top == NULL)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    // 移除栈顶节点，并返回其数据元素
    int element = stack->top->data;
    Node *temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return element;
}

// 获取栈顶元素
int top(Stack *stack)
{
    // 判断栈是否为空
    if (stack->top == NULL)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    // 返回栈顶节点的数据元素
    return stack->top->data;
}

// 判空操作
int isEmpty(Stack *stack)
{
    return stack->top == NULL;
}

// 递归函数计算斐波那契数列的第n个元素
int fibonacci(int n)
{
    // 基本情况：当n为0或1时，返回n
    if (n == 0 || n == 1)
    {
        return n;
    }
    // 递归调用：计算前两个元素的和
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 递归函数计算阶乘
int factorial(int n)
{
    // 基本情况：0的阶乘为1
    if (n == 0)
    {
        return 1;
    }
    // 递归调用：n的阶乘等于n乘以(n-1)的阶乘
    return n * factorial(n - 1);
}

int main()
{
    Stack stack;
    initStack(&stack); // 初始化栈

    // 压栈操作
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    // 弹栈操作
    printf("Popped element: %d\n", pop(&stack));

    // 获取栈顶元素
    printf("Top element: %d\n", top(&stack));

    int n = 10; // 计算斐波那契数列的第10个元素
    printf("Fibonacci number at position %d is: %d\n", n, fibonacci(n));

    int n2 = 5;
    printf("Factorial of %d is %d\n", n2, factorial(n2));

    return 0;
}