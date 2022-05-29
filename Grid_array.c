#include <stdio.h>

int main()
{
	//int number[2][3] = { { 1, 2, 3 } {4, 5, 6} };

	//int userin[] = { 0 }; //rows
	//int userin1[] = { 0 }; // columns
	int userin = 0, userin1 = 0;

	printf("How many columns do you want?:\n");
	scanf_s("%d", &userin);

	printf("How many rows do you want?:\n");
	scanf_s("%d", &userin1);


	//int columns[userin][userin1];
	//int rows[userin][userin1];
	
	int numbers[100][100] = {0};

	for (int i = 0; i < userin; i++) //rows
	{
		for (int j = 0; j < userin1; j++) //columns
		{
			numbers[i][j] = 1;
			printf("%d ", numbers[i][j]);
		}
		printf("\n");
	}

	return 0;
}