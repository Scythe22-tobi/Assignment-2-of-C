#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter 3 digit integer=");
	scanf("%d",&num);
	int rem;
	while(num>0)
	{
		rem=num%10;
		printf("\n%d",rem);
		
		num=num/10;	
	}	
	
	return 0;
}
