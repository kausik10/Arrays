#include<stdio.h>

void addArrays(int rows, int cols)
{
	int i, j;
	int a1[rows][cols], a2[rows][cols];
	int sum[i][j];
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
		printf("\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
		printf("\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			sum [i][j] = a1[i][j] + a2[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int rows, cols;
	int i, j;
	
	printf("ENter the number of rows: ");
	scanf("%d", &rows);
	printf("ENter the number of columns: ");
	scanf("%d", &cols);
	
	addArrays(rows, cols);
	
	return 0;
}
