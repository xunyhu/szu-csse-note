// 栈的顺序实现

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// 定义栈结构体
typedef struct
{
    int data[MAX_SIZE]; // 用数组存储栈元素
    int top;            // 栈顶指针，指向栈顶元素的位置
} Stack;

// 初始化栈
void initStack(Stack *stack)
{
    stack->top = -1; // 栈顶指针初始化为-1，表示栈为空
}

// 入栈操作
void push(Stack *stack, int element)
{
    // 判断栈是否已满
    if (stack->top == MAX_SIZE - 1)
    {
        printf("Stack is full\n");
        exit(1);
    }
    // 将新元素添加到栈顶，并更新栈顶指针
    stack->data[++stack->top] = element;
}

// 出栈操作
int pop(Stack *stack)
{
    // 判断栈是否为空
    if (stack->top == -1)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    // 返回栈顶元素
    return stack->data[stack->top--];
}

// 获取栈顶元素
int top(Stack *stack)
{
    // 判断栈是否为空
    if (stack->top == -1)
    {
        printf("Stack is empty\n");
        exit(1);
    }
    // 返回栈顶元素
    return stack->data[stack->top];
}

// 判空操作
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

// 获取栈大小
int size(Stack *stack)
{
    return stack->top + 1;
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

    // 获取栈大小
    printf("Stack size: %d\n", size(&stack));

    return 0;
}