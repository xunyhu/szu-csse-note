#include <stdio.h>

// 求阶乘之和。 在数学中，正整数的阶乘（英语：Factorial）是所有小于等于该数的正整数的积。1的阶乘和0的阶乘都为1。
int fact1(int n)
{
    int i, j, temp, s;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        temp = 1;
        for (j = 1; j <= i; j++)
            temp = temp * j;
        s = s + temp;
    }
    return s;
}

int fact2(int n)
{
    int i, j, temp, s;
    s = 0;
    temp = 1;
    for (i = 1; i <= n; i++)
    {
        temp = temp * i;
        s = s + temp;
    }
    return s;
}

int main()
{
    int res = fact1(3); // 1 + 1 * 2 + 1 * 2 * 3 = 9
    printf("res 的阶乘之和是 : %d\n", res);

    int res2 = fact2(3);
    printf("res2 的阶乘之和是 : %d\n", res2);
    return 0;
}