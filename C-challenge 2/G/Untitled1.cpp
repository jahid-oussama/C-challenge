#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,d,D;
	
		printf("hello(^_^), \nhere you can calculates the possible solutions of a 2nd degree equation \nthe 2nd degree equation it write like this ax^2+bx+c=0 ");
		
			printf("\nenter your a : ");
		    scanf("%lf",&a);	
		
			printf("\nenter your b : ");
			scanf("%lf",&b);
		
			printf("\nenter your c : ");
			scanf("%lf",&c);
		d=pow(b,2)-4*a*c;
		
				if(d<0)
				{
				    	printf("The discriminant D is strictly negative ( D < 0 ) L'équation %lf x^2 + %lf x + %lf = 0 \ndoes not admit a real solution ",a,b,c);	
					
				}
				else if(d==0)
				{
						printf("The discriminant D is zero. L'équation %lf x^2 + %lf x + %lf = 0 \nadmits a double real solution x0 = %lf",a,b,c,-b/(2*a));	

				}
				else 
				{
					
					printf("");
				}
	
	
	
}
