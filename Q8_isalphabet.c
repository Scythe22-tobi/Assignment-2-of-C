#include<stdio.h>
int main()
{
	//Q8.Scan a character from user.Check if it is capital alphabet or not.
	
	char ch;
	printf("\nEnter a character=");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("\nCapital Alphabet is entered");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("\nSmall Alphabet is entered");
	}
	else
	{
		printf("\nThe charecter isnt an Alphabet");
	}
	
	return 0;
}
