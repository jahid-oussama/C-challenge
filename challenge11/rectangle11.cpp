#include <stdio.h>

int main()
{
	double longueur,largeur,rectangle;
	printf("hello, here you can convert the circumference of a rectangle depending on Take the length and width : ");
	
	scanf("%lf %lf",&longueur,&largeur);
	
	rectangle = 2*(longueur + largeur);
	
	printf("this is your circumference : %lf \nthanks for your time",rectangle);
	
}
