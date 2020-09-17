#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	for (int i = 1; i <= (2*N) - 1; i++)
	{
		for (int j = 1; j <= (2*N) - 1; j++)
		{
			if (i <= N)
			{
				if (j <= i || (j >= (2 * N) - i && j <= (2 * N) - 1))
				{
					printf("* ");
				}
				else if (j > i && j < (2 * N) - i)
				{
					printf("  ");
				}
			}
			else if (i > N)
			{
				if (j <= (2 * N) - i || (j >= i && j <= (2 * N) - 1))
				{
					printf("* ");
				}
				else if (j > (2 * N) - i && j < i)
				{
					printf("  ");
				}
			}
		} 
		printf("\n");
	}
	return 0;
}