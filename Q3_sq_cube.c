#include<stdio.h>
int main()
{
	//Q3.Scan 2 numbers from user.Print square and cube of both numbers.
	
	int num1,num2;
	
	printf("\nEnter 2 integers = ");
	scanf("%d%d",&num1,&num2);
	
	printf("\nThe square of the %d = %d",num1,num1*num1);
	printf("\nThe square of the %d = %d",num2,num2*num2);
	
	printf("\nThe cube of the %d = %d",num1,num1*num1*num1);
	printf("\nThe cube of the %d = %d",num2,num2*num2*num2);
	
	return 0;
}
