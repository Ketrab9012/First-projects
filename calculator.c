#include <stdio.h>

int main()
{
	char op;
	float num1;
	float num2;
	double total;

	printf("\nEnter what you would like to do (+ - * / ):");
	scanf("%c", &op);

	printf("\nplease enter your first number:");
	scanf("%f", &num1);

	printf("\nplease enter your second number:");
	scanf("%f", &num2);

	switch (op)
	{
	case('+'):
		total = num1 + num2;
		printf("\n%f + %f = %.2lf", num1 ,num2 ,total);

		break;

	case('-'):
		total = num1 - num2;
		printf("\n%f - %f = %.2lf", num1, num2, total);

		break;

	case('*'):
		total = num1 * num2;
		printf("\n%f * %f = %.2lf", num1, num2, total);

		break;

	case('/'):
		total = num1 / num2;
		printf("\n%f / %f = %.2lf", num1, num2, total);

		break;

	default:
		printf("%c is not valid", op);

		break;

	}
	
	return 0;
}