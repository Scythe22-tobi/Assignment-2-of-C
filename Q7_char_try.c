#include<stdio.h>
int main()
{
	/*Q7.Scan a character from user.Print "APPLE" if user enters a or A.Otherwise print message
	"NO APPLE".()*/
	
	char ch;
	printf("\nEnter a character=");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='A')
	{
		printf("\nApple");
	}
	else
	{
		printf("\nNo Apple");
	}
	
	return 0;
}
