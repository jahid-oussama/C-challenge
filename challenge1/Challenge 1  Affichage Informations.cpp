#include <stdio.h>

int main()
{
	char firstname[10],lastname[10],age[10],sexe[10],email[10],phonenumber[10];
	
	
	// says holle and ask for your information
	
	
	printf("hello, welcome to all visitors\n first name : ");
	scanf("%s,",&firstname);
	printf(" last name : ");
	scanf("%s,",&lastname);
	printf("age : ");
	scanf("%s,",&age);
	printf("sexe [M/F] : ");
	scanf("%s,",&sexe);
	printf("email : ");
	scanf("%s,",&email);
	printf("phone number : ");
	scanf("%s,",&phonenumber);
	
	
	// verify information
	
	printf("\n please verify you information \n");
	printf("\n your first name is : %s",firstname);
	printf("\n your last name : %s",lastname);
	printf("\n your age is : %s",age);
	printf("\n your sexe is : %s",sexe);
	printf("\n your email is : %s",email);
	printf("\n your phone number is : %s",phonenumber);
	printf("\n thanls for your time (^_~)");
	
	// made buy jahid
	
}
