#include<stdio.h>
void transpose(int, int);
int main()
{
	int rows, cols;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	scanf("%d", &cols);
	if (rows > 0 && cols > 0)
		transpose(rows, cols);
	return 0;
}
void transpose(int rows, int cols)
{
	int a[rows][cols], result[cols][rows];
	int i, j, k, temp;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			result[j][i]=a[i][j];
		}
	}
	
	printf("The transpose of given matrix is: \n");
	for ( i = 0; i < cols; i++)
	{
		for (j = 0; j < rows; j++)
		{
			printf("%d ", result[i][j]); 
		}
		printf("\n");
	}
}
