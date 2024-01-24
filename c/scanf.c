#include <stdio.h>

int main()
{
	int age;
	float gpa;
	char grade;

	printf("Your age: \n");
	scanf("%i", &age);

	printf("Your GPA: \n");
	scanf("%f", &gpa);

	printf("Your Grade: \n");
	scanf(" %c", &grade);

	printf("Your age is: %i\n", age);
	printf("Your GPA is: %f\n", gpa);
	printf("Your Grade is: %c\n", grade);

	return 0;
}

