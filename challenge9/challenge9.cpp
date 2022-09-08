#include <stdio.h>
#include <math.h>


int main()
{
   double x1,y1,x2,y2,MN;
   printf("hello, \nentre X1 et Y1 : ");
   scanf("%lf %lf",&x1,&y1);
   printf("\nentre X2 Y2 : ");	
   scanf("%lf %lf",&x2,&y2);
   
   
    MN = sqrt(pow(x1-x2,2)+ pow(y1-y2,2));
	
	printf("this is your point distance : %lf \nthanks for your time",MN);
}
