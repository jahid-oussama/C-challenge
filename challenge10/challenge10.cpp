#include <stdio.h>

int main()
{
	double r,cercle;
	const double pi = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
	
	printf("hello, \nhere you can give us the radius of the circle and we give your circumference of a circle :  ");
	
	scanf("%lf",&r);
	
	cercle = 2*pi*r;
	
	printf("this is your circumference of a circle : %.2lf \nthanks for your time",cercle);
	
	
	
}
