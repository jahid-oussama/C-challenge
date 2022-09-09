#include <stdio.h>

int main()
{
char alpha;	
printf("Hello, enter your character : ");
scanf("%S",&alpha);

int ascii=alpha; //%d

if (ascii<=90 && ascii>=65)
{
	printf("your alpha is kbire ");
}

else if (ascii<=122 && ascii>=97)
{
	printf("your alpha is SGHIRE  ");
}
else
{
	printf("please enter an alpha ");
	}	
	
	

	
	
}
