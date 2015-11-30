#include<stdio.h>
#define N 10
int main()
{
	int x, y, i = N-1, j = N-1;
	char b[N][N];
	/*for (; i > 0; i--)
		for (; j > 0; j--)
			b[i][j] = 'o';
 	printf("请输入雷区范围（x < 21，y < 21）：");   //输入雷区范围用代码
	scanf("%d %d", &x, &y);*/
	for (; i > 0; i--)
	{
		for (; j > 0; j--)
		{
		b[i][j] = '*';
		}
		b[i][N] = '\0';
	}
		
		
	/*srand((unsigned)time(0));
	for (x = 9; x > 0; x--)
		for (y = 9; y > 0; y--){
		z = rand() % 10 + 1;
		if (z > 8)
			b[x][y] = 'B';
		}*/
	
	for (x = N-1; x > 0; x--)
	{
		for (y = N-1; y > 0; y--)
			printf("%c", b[x][y]);
		//b[x][y] = '\0';
		printf("\n");
	}
		
		
}