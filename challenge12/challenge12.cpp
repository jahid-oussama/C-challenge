#include<stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	
	b=a/100;
	c=(a-b*100)/10;
	d=a-((a/10)*10);
	
	
	printf("%d %d %d",d,c,b);
	
}
