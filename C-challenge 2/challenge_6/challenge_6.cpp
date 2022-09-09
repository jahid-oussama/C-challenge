#include <stdio.h>

int main()
{
	int x;
	printf("Hello, please enter your number : ");
	scanf("%d",&x);
	
	if(x>0)
	{
		printf("number is positife");
	}
	else if (x<0)
	{
		printf("number is nigative");
	}
	else 
	{
		printf("number is zero");
	}
	
}

