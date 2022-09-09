#include<stdio.h>

int main()
{
    
    int y,m=12,d=365,h=8760,mi=525600,x;
    
    printf("Hello,here you can convert your year to days or month or hours or minutes \nso please entre you year : ");
    
    scanf("%d",&y);
    
    printf("please select which one you want to convert to \n1.month \n2.days \n3.hour \n4.minutes\n=> ");
    
    scanf("%d",&x); 
    
            switch(x)
            {
                
                case 1:
                    printf("your %d year equal %d months ",y,y*m);
                    
                    break;
                case 2:    
                    printf("your %d year equal %d months ",y,y*d);
                    break;
                case 3:
                    printf("your %d year equal %d months ",y,y*h);
                    break;
                case 4:    
                    printf("your %d year equal %d months ",y,y*mi);
                    break;
                    
                default:
                	printf("please choose from the menu (ToT)");
                    break;
            }    
    
} 

