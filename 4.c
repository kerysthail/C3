#include<stdio.h>
int main(void)
{
	float number;

	printf("Enter a floating-point value:");
	scanf_s("%f",&number);
	printf("fixed-point notation:%f\n",number);
	printf("exponential notation:%e\n", number);
	printf("p notation:%a", number);

	return 0;
}
