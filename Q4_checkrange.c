#include<stdio.h>
int main()
{
	//Q4.Scan a number from user.Print message correct input if numer lies between 15 and 20.
	
	int num;
	printf("\nEnter a number = ");
	scanf("%d",&num);
	
	if(num>=15 && num<=20)
	{
		printf("\nThe number lies between 15 and 20");
	}
	else
	{
		printf("\nThe number does not lie between 15 and 20");	
	}
	
	return 0;
}
