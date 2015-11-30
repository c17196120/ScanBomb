#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 10

int random(int m, int n)
{
	m = rand() % N + 1;
	n = rand() % N + 1;
	return m, n;
}
int detector(int xAxis, int yAxis)
{

}

int main()
{
	int x, y, k, xAxis, yAxis;
	int B[N][2];
	char b[N][N] = { 0 };
	srand((unsigned)time(0));

	for (x = 0; x < N; x++)
	{
		for (y = 0; y < N; y++)
		{
			b[x][y] = '*';
			printf("%c", b[x][y]);  //制造场地
		}
		printf("\n");
	}

	for (k = 0; k < 10; k++)  //取十颗雷的位置
	{
		B[k][0] = random(B[k][0], B[k][1]);
		B[k][1] = random(B[k][0], B[k][1]);
	}
	for (k = 0; k < 10; k++)
	{
		printf("%d%d\n", B[k][0], B[k][1]);
	}
	printf("请输入将要扫描的位置(x,y)：\n>");
	scanf("%d%d", &xAxis, &yAxis);
	for (int i = 0; i < N; i++)
	{
		if (B[i][0] == xAxis)
		{
			for (int j = 0; j < N; j++)
			{
				if (B[j][1] == yAxis)
				{
					printf("You Lose!\n");  //判断是否踩雷
					goto quit;
				}
			}
		}
	}

quit:
	return 0;
}