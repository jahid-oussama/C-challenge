#include <stdio.h>

int main()
{
	int a,b;
	
	printf("here we do the calculate for you. \nyou give us to numbers  and we do  (* )and( /) and(+)and(-)and (modulo) \nplease enter your numbers : ");
	
	scanf("%d %d",&a,&b);

	printf("your first Equation is(+) :  %d+%d=%d \nsecond equation is(-) : %d-%d=%d \nthird equation is(*) : %d*%d=%d \n ",a,b,a+b,a,b,a-b,a,b,a*b );
	
	
	if(b!= 0 )   	
	{
		printf("Fifth equation is(/) : %d/%d=%d  \n last equation is (modulo) : %d mode %d=%d \n",a,b,a/b,a,b,a%b);
		
	}
	else 
	{
		printf("%d/%d: impossible \n%d mod %d : impossible",a,b,a,b);
	}

}
