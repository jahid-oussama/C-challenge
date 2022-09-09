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
		printf("this is d result %lf\n",d);
				if(d<0)
				{
				    	printf("The discriminant D is strictly negative ( D < 0 ) L'équation %.2lf x^2 + %.2lf x + %.2lf = 0 \ndoes not admit a real solution ",a,b,c);	
					
				}
				else if(d==0)
				{
						printf("The discriminant D is zero. L'équation %.2lf x^2 + %.2lf x + %.2lf = 0 \nthe equation has a unique solution x0 = %.2lf",a,b,c,-b/(2*a));	

				}
				else 
				{
					
					printf("The discriminant D is D>0 L'équation %lf x^2 + %.2lf x + %.2lf = 0 \nthen the equation admits two real solutions denoted x1 = %.2lf et x2 = %.2lf",a,b,c,(-b-sqrt(d))/2*a,(-b+sqrt(d)/2*a));
				}
	
	
	
}






















