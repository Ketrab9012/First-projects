#include <stdio.h>


void cola(char op, double num1, double num2, double resu)
{
	switch (op)
	{
	    case('+'):
	    	resu = num1 + num2;
	    	break;

	    case('-'):
			resu = num1 - num2;
		    break;

	    case('*'):
			resu = num1 * num2;
	    	break;

    	case('/'):
			resu = num1 / num2;
	    	break;

	     default:
		 break;
	}

	printf("\n%.2lf %c %.2lf = %.2lf", num1, op, num2, resu);

	return;
}




int main()
{
	char op;
	double num1;
	double num2;
	double resu = 0;
	
	printf("Please state what you would like to do (+ - * /)");
	scanf("%c", &op);

	printf("\nEnter num1:");
	scanf("%lf", &num1);

	printf("\nEnter num2:");
	scanf("%lf", &num2);

	cola(op, num1, num2, resu);

	return 0;
}

