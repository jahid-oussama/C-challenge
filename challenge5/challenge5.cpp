#include <stdio.h>

int main()
{
	double Celsius,Fahrenheit;
	
	printf("hello,\nthanks for your visiting \n here you can convert Fahrenheit to Celsius \n please entre your temperature :    ");
	
	scanf("%lf",&Fahrenheit);
	
	Celsius = (Fahrenheit-32)/1.8;
	
	printf("this is your temperature in Celsius : %lf",Celsius);
	
	if(20<=Celsius && Celsius<30)
	{
		printf("\n The weather is hot ");
	}
	
	else if(30<=Celsius && Celsius<50)
	{
		printf("\n The weather is very hot");
	}
	
	else if(0<=Celsius && Celsius<20)
	{
		printf("\n The weather is cold");
	}
	
	else 
	{
		printf("\n The weather is very cold");
	}
	
}
