#include<stdio.h>
void bubbleSort(int );
int main()
{
	int n, i, j, k;
	int temp;
	
	printf("Enter the size of array: ");
	scanf("%d", &n);
	if (n > 1)
		bubbleSort(n);
	else
		printf("Can't sort.\n");
		
	return 0;	
}

void bubbleSort(int n)
{
	int a[n];
	int i, j, k;
	int temp;
	for (i = 0; i < n; i++)
	{
		printf("Enter elements: a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n-1; i++)
	{
		for (k = 0; k < n-1; k++)
		{
		if (a[k]>a[k+1])
		{
			temp = a[k];
			a[k] = a[k+1];
			a[k+1] = temp;
		}
	
		}
	}
	printf("Array sorted in ascending order:\n");
	for (j = 0; j < n; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
}
