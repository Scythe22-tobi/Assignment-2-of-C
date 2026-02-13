#include<stdio.h>
int main()
{
	//Q13.Scan 3 integers from user.Find the smallest of those 3 integers.
	
	int num1,num2,num3;
	
	printf("\nEnter 3 integers =");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	num2=num1>num2?num2:num1;
	num3=num2>num3?num3:num2;
	
	printf("\nThe smallest integer among three is =%d",num3);
	
	return 100;
}
