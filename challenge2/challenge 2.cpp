#include <stdio.h>

int main()
{
	double C,F;
	
	printf("Here you can convert Celsius to Fahrenheit\n Enter your Celsius :  ");
	
	scanf("%lf",&C);
	
	F = (C*1.8)+32;
	
	printf("this is your  Fahrenheit : %.2lf",F);
	
	printf("\nThanks for running me (^_^)");
	
	
}
