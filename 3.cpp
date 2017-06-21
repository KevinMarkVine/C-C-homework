#include<stdio.h>
#define N 3
#define M 3
int main()
{
	int i, j, k, a[N][M], max, maxj,flag;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			scanf("%d", &a[i][j]);
	}
		for (i = 0; i < N; i++)
	{
			max = a[i][0];
			maxj = 0;
			for (j = 0; j < M; j++)
				if (a[i][j] > max)
				{
					max = a[i][j];
					maxj = j;
				}
			flag = 1;
			for(k=0;k<N;k++)
				if(max>a[k][maxj])
				{
					flag = 0;
				}
			if (flag)
			{
				printf("a[%d][%d]=%d\n", i, maxj, max);
				break;
			}
	}
		if(!flag)
			printf("°°Êý²»´æÔÚ£¡");
	return 0;
}
