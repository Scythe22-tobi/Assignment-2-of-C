#include<stdio.h>
int main()
{
	//Q1.Scan 3 integers from user.Print their average.
	
	int num1,num2,num3;
	
	printf("\nEnter 3 integer values space seprated =");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	printf("\nThe average of the 3 integers entered is = %f",(num1+num2+num3)/3.0);
	
	return 0;
}
