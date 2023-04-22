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

#define N 7//区域个数
 
void MapColor(int dist[N][N],int s[N])
{
	int color,area,k;//总共有4种颜色
	s[0]=1;//第一个区域先着色为颜色1
	area=1;//从第二区域开始试探染色
	color=1;//从第一种颜色开始试探
	while(area<N)//是否全部染色完毕
	{
 
		while(color<=4)
		{
			if(area>=N)
				break;
			k=0;
			while((k<area)&&(s[k]*dist[area][k]!=color))//判断是否重色
				k++;
			if(k<area)
				color++;
			else
			{
				s[area]=color;
				area++;
				color=1;
			}
		}
		if(color>4)//没有找到合适的颜色，需要进行回溯
		{
			area=area-1;
			color=s[area]+1;
		}
		
	}
}

int main()
{
    int res = fact1(3); // 1 + 1 * 2 + 1 * 2 * 3 = 9
    printf("res 的阶乘之和是 : %d\n", res);

    int res2 = fact2(3);
    printf("res2 的阶乘之和是 : %d\n", res2);

    //地图着色
    int dist[N][N]={{0,1,1,1,1,1,0},//地图的邻接矩阵
					{1,0,0,0,0,1,0},
					{1,0,0,1,1,0,0},
					{1,0,1,0,1,1,0},
					{1,0,1,1,0,1,0},
					{1,1,0,1,1,0,0},
					{0,0,0,0,0,0,0}};
	int s[N]={0};
	MapColor(dist,s);
	printf("地图区域标号为1~7的染色情况为：");
	for(int i=0;i<N;i++)
		printf("%d ",s[i]);
	printf("\n");
    return 0;
}