#include <stdio.h>

int main()
{
	int x;
	printf("hello, please enter your number : ");
	
	scanf("%d",&x);
	
	printf("this is your number %d if you divide it on 2 = %d",x,x%2);
	 
	  if(x%2==0){
        printf("\nthe number is even (pair) ");
    }
    
    else{
        printf("\nthe number is odd (impair) ");
    
    }
	
}
