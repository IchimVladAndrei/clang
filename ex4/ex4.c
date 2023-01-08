#include <stdlib.h>
#include <stdio.h>

int main() {
	int** p1, ** p2, ** p3;
	int row1, row2, col1, col2, i, j, k;
	printf("\nEnter number of rows for the first matrix:");
	scanf("%d", &row1);
	printf("\nEnter number of columns for the first matrix:");
	scanf("%d", &col1);
	printf("\nEnter number of rows for the second matrix:");
	scanf("%d", &row2);
	printf("\nEnter number of columns for the second matrix:");
	scanf("%d", &col2);

	if (col1 != row2)
	{
		printf("\n The multiplication cannot be done!");
		return 0;
	}

	//dynamic memory allocation for matrix rows

	p1 = (int**)malloc(sizeof(int*) * row1);
	p2 = (int**)malloc(sizeof(int*) * row2);
	p3 = (int**)malloc(sizeof(int*) * row1);

	//dynamic memory allocation for matrix columns

	for (i = 0; i < row1; i++)
		p1[i] = (int*)malloc(sizeof(int) * col1);
	for (i = 0; i < row2; i++)
		p2[i] = (int*)malloc(sizeof(int) * col2);
	for (i = 0; i < row1; i++)
		p3[i] = (int*)malloc(sizeof(int) * col2);


	printf("\nEnter the elements of the first matrix:\n");
	for (i = 0; i < row1; i++)
		for (j = 0; j < col1; j++) {
			printf("\nA[%d][%d]= ", i, j);
			scanf("%d", &p1[i][j]);
		}
	for (i=0;i<row2;i++)
		for (j = 0; j < col2; j++) {
			printf("\nA[%d][%d]= ", i, j);
			scanf("%d", &p2[i][j]);
		}

//multiplication
	for(i=0;i<row1;i++)
		for (j = 0; j < col1; j++)
		{
			p3[i][j] = 0;
			for (k = 0; k < col2; k++)
				p3[i][j] = p3[i][j] + p1[i][k] * p2[k][j];
		}
	printf("\nThe result is");
	for (i = 0; i < row1; i++)
	{
		printf("\n\t\t\t");
		for (j = 0; j < col2; j++)
			printf("%d\t", p3[i][j]);
	}

	//deallocating memory

	for (i = 0; i < row1; i++)
		free(p1[i]);
	free(p1);
	for (i = 0; i < row2; i++)
		free(p2[i]);
	free(p2);
}
