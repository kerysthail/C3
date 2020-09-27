#include<stdio.h>
int main(void)
{
	float pint,cup,ounce,soupspoon,teaspoon;

	printf(" Imput the number of cups:");
	scanf_s("%f",&cup);
	pint = cup / 2;
	ounce=cup*8;
	soupspoon = ounce * 2;
	teaspoon = soupspoon * 3;
	printf("The number of pint is:%f\n",pint);
	printf("The number of ounce is:%f\n", ounce);
	printf("The number of soupspoon is:%f\n", soupspoon);
	printf("The number of teaspoon is:%f\n", teaspoon);
	
	return 0;
}
