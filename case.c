#include <stdio.h>
#include <ctype.h>


char checkGrade(char Grade)	
{
	Grade = toupper(Grade);

	//switch can be used instead of ising multiple else if commands
	//default is used instead of else

	switch (Grade)
	{
	case 'A':
		printf("goated");
		break;
	case 'B':
		printf("could be better");
		break;
	case 'C':
		printf("cuck");
		break;
	case 'D':
		printf("insert dick joke");
		break;
	case 'F':
		printf("lmao get good scrub");
		break;

	default:
		printf("\nplease type vaild grade");
		
		return 1;
		
		break;
	}

	return 0;

}

int main()
{
	char grade;

	printf("\nPlease enter your grade:");
	scanf("%c", &grade);

	int Result = 1;

	while (Result != 0)
	{
		Result = checkGrade(grade);

		//This means a grade is correct.
		//Break stops the while loop without meeting the condition
		//So it returns 0 in main
		//Since its straight after the while loop.
		if (Result == 0) break;

		//This means that Result returns an error
		printf("\nPlease enter your grade:");
		scanf("%c", &grade);
	}

	return 0;

}