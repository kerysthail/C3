#include<stdio.h>
int main(void)
{
	float quaters,molecular;

	printf("Enter the number of quaters of water:");
	scanf_s("%f",&quaters);
	molecular = quaters * 950 * 3.0e23;
	printf("The moleculars of water is:%e",molecular);
	
	return 0;
}
