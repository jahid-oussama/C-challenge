#include <stdio.h>

int main()
{
	double Celsius,Fahrenheit;
	
	printf("hello,\nthanks for your visiting \n here you can convert Celsius to  Fahrenheit \n please entre your temperature :    ");
	
	scanf("%lf",&Celsius);
	
	Fahrenheit=(Celsius*9/5)+32;

	printf("this is your temperature in Celsius : %lf",Fahrenheit);
	
	if(68<=Fahrenheit && Fahrenheit<86)
	{
		printf("\n The weather is hot ");
	}
	
	else if(86<=Fahrenheit )
	{
		printf("\n The weather is very hot");
	}
	
	else if(32<=Fahrenheit && Fahrenheit<68)
	{
		printf("\n The weather is cold");
	}
	
	else 
	{
		printf("\n The weather is very cold");
	}
	
}
