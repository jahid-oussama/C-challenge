#include <stdio.h>

int main()
{
	char x;
	char y[10];
	printf("hello, enter your Letter : ");
	scanf("%c",&x);
	switch (x)
	  {
	  	
	  	case "Y":  case 'e': case 'i': case 'u': case 'o': case 'y':
	  		printf("your lettere (%c) is Letter vowel (voyelle) ",x);
	  	break;
	  	
	  	 default:
         printf("your lettere (%c) is not a Letter vowel (consonnes)",x);
	  }
	
}
