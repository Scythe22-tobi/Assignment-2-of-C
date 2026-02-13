#include<stdio.h>
int main()
{
	//Q6.Scan a number from user.Check if it is multiple of 6 or not without using 6.
	
	int num;
	printf("Enter a number=");
	scanf("%d",&num);
	
	if((num%2 && num%3 )==0)
	{
		printf("\nThe number is multiple of 6");
	}
	else
	{
		printf("\nThe number is not a multiple of 6");
	}
	
	return 0;
}
