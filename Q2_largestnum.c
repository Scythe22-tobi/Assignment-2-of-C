#include<stdio.h>
int main()
{
	//Q2.Scan 3 numbers from user.Find the largest of them.
	
	int num1,num2,num3;
	
	printf("\nEnter 3 integers space seprated=");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	num2=num1>num2?num1:num2;
	
	num3=num2>num3?num2:num3;
	
	printf("\nThe largest number = %d",num3);
	
	return 0;
}
