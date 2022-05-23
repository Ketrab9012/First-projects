#include <stdio.h>
#include <string.h>

/*
	x + y = z
	y + z = n
	z + n = k...
	*/

int calcu(int num1, int num2,int num3, int userin, int result)
{
	if (result == 0)
	{
		printf("\n%d\n%d", num1, num2);

		for (int i = 2; i < userin; i++)
		{
			num3 = num1 + num2;

			printf("\n%d", num3);

			num1 = num2;
			num2 = num3;

			/*if (userin <= 1)
			{
				num3 = num1 + num2;
				printf("\n%d", num3);
			}
			else if (userin <= 2)
			{
				num1 = num2 + num3;
				printf("\n%d", num1);
			}
			else(userin > 3);
			{
				result = num3 + num1;
				// my epic fail of an attempt of overcomplicating stuff
			}*/
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


int main()
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 0;
	int userin = 0;
	int result = 0;
	

	printf("\nHow many times do you want to run the sequence:");
	scanf_s("%d", &userin);


	calcu(num1, num2, num3, userin, result);

	return 0;
}