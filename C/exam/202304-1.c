/**
 *
37. 写出计算方阵 A[n][n]与 B[n][n]的乘积 C[n][n]的算法。

    计算两个方阵 A 和 B 的乘积 C 的算法如下：

        创建一个新的方阵 C，大小为 n × n。
        对于 C 的每个元素 C[i][j]，计算：
        C[i][j] = A[i][0] × B[0][j] + A[i][1] × B[1][j] + ... + A[i][n-1] × B[n-1][j]
        返回 C。
*/

#include <stdio.h>

#define N 3 // 方阵大小

// 计算方阵乘积的函数
void matrix_multiply(int A[N][N], int B[N][N], int C[N][N])
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

// 打印矩阵的函数
void print_matrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int A[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[N][N];

    // 计算矩阵乘积
    matrix_multiply(A, B, C);

    // 打印结果
    printf("Matrix A:\n");
    print_matrix(A);
    printf("\n");

    printf("Matrix B:\n");
    print_matrix(B);
    printf("\n");

    printf("Matrix C (A * B):\n");
    print_matrix(C);

    return 0;
}
