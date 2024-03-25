#include <stdio.h>

#define N 3 // 定义方阵的大小为 3，你可以根据需要修改为其他值

void matrixMultiplication(int A[][N], int B[][N], int C[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0; // 初始化 C[i][j] 为 0
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j]; // 计算 C[i][j] 的值
            }
        }
    }
}

int main()
{
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[N][N];

    matrixMultiplication(A, B, C);

    // 输出乘积矩阵 C
    printf("Matrix C:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
