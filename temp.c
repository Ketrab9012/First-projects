#include <stdio.h>
#include <ctype.h>

//Celsius to Fahrenheit  (°C x 9 / 5) + 32
//Fahrenheit to Celsius	 (°F - 32) 5 / 9

void calculation(char op, float temp, float result)
{
	if (op == 'F')
	{
		result = (temp - 32) * 5 / 9;
		printf("%.2f", result);

	}
	else (op == 'C');
	{
		result = (temp * 9 / 5) + 32;
		printf("%.2f", result);
	}
	
	return;

}

int main()
{
	char op;
	float temp = 0;
	float result = 0;

	printf("\nPlease input what you would like to convert from (C or F):");
	scanf("%c", &op);

	printf("\nInsert the temprature you would like to convert:");
	scanf("%f", &temp);

	op = toupper(op);
	calculation(op, temp, result);

	return 0;
}