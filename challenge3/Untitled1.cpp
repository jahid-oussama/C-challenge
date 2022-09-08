#include <stdio.h>

int main()
{
	double Metre,Km,Mile; 
	printf("hello, to all the visiterse, here you can convert Metre to Mile \n tape your distance [Metre] here :  ");
	
	scanf("%lf",&Metre);
	
	Km= Metre*0.001;
	Mile = Km*0.62137;
	
	printf("this is your distance in Mile : %.3lf \n",Mile);
	
	printf("\n thanks you so much for your time (^_^)");
	
	
	
}
