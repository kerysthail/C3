#include<stdio.h>
int main(void)
{
	float length,inch;

	printf(" Imput your length:");
	scanf_s("%f",&inch);
	length=inch*2.54;
	printf(" Your length is %f cm",length);
	
	return 0;
}
