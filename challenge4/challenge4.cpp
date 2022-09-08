#include <stdio.h>

int main()
{
	double Metre,Km,Mile; 
	printf("hello, to all the visiterse, here you can convert Mile to Metre \n tape your distance [Mile] here :  ");
	
	scanf("%lf",&Mile);
	
	Km = Mile*1.609344;
	Metre = Km*1000;
	
	printf("this is your distance in Metre : %lf \n",Metre);
	
	printf("\n thanks you so much for your time (^_^)");
	
	
	
}
