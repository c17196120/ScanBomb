#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>
#define N 10

int random(int m, int n)
{
	srand((unsigned)time(0));
	m = rand() % N +1;
	n = rand() % N +1;
	//Sleep(200);
	return m, n;
}

int main()
{
	int x, y, i, j, k;
	int m[N], n[N];
	char b[N][N] = {0};
	/*for (; i > 0; i--)
		for (; j > 0; j--)
			b[i][j] = 'o';
 	printf("请输入雷区范围（x < 21，y < 21）：");   //输入雷区范围用代码
	scanf("%d %d", &x, &y);*/

	/*for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
		b[i][j] = '*';
		}
	}
	
	for (x = 0; x < N; x++)
	{
		for (y = 0; y <N; y++)
			printf("%c", b[x][y]);
		printf("\n");
	}*/

	for (k = 0; k < 10; k++)
	{
		m[k] = random(m[k], n[k]);
		n[k] = random(m[k], n[k]);
	}
	for (k = 0; k < 10; k++)
	{
		printf("%d%d\n", m[k], n[k]);
	}
	
}