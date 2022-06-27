#include<stdio.h>
void multiplyArray(int ,int ,int ,int );
int main()
{
	int row1, col1, row2, col2;
	
	printf("Enter same number of (colums for matrix 1 & row for matrix 2)\n");
	printf("Enter the number of rows of matrix 1: row1 = ");
	scanf("%d", &row1);
	printf("Enter the number of colums of matrix 1: col1 = ");
	scanf("%d", &col1);
	printf("Enter the number of rows of matrix 2: row2 = ");
	scanf("%d", &row2);
	printf("Enter the number of rows of matrix 2: col2 = ");
	scanf("%d", &col2);
	
	if (col1 == row2)
	{
		multiplyArray(row1, col1, row2, col2);
	}
	else
	{
		printf("Matrix multiplication not possible\n");
	}
	return 0;
}

void multiplyArray(int row1,int col1,int row2,int col2)
{
	int i, j, k, sum = 0;
	int a1[row1][col1], a2[row2][col2], result[row1][col2];
	
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col1; j++)
		{
			scanf("%d", &a1[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < row2; i++)
	{
		for (j = 0; j < col2; j++)
		{
			scanf("%d", &a2[i][j]);
		}
	}
	printf("\n");
	
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col2; j++)
		{
			for (k = 0; k < col1; k++)
			{
				sum += a1[i][k] * a2[k][j];
			}
			
			result[i][j] = sum;
			sum = 0;
		}
	}
	for (i = 0; i < row1; i++)
	{
		for (j = 0; j < col2; j++)
		{
			printf("%d ", result [i][j]);
		}
		printf("\n");
	}
}

