#include <stdio.h>
#include <math.h>

char circle()
{
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;


	printf("\nWhat is the radius of a circle: ");
	scanf_s("%lf", &radius);

    circumference = 2 * PI * radius;	
	area = PI * radius * radius;

	printf("\narea: %lf", area);
	printf("\ncircumference: %lf", circumference);

	return 0;
}
int main() 
{
	circle();
	return 0;
}