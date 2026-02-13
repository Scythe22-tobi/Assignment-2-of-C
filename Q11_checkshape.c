#include<stdio.h>
int main()
{
	//Q11.Scan length and width of a rectangle from user.Check if it is square or rectangle.
	
	int l,w;
	printf("\nEnter length =");
	scanf("%d",&l);
	
	printf("\nEnter width =");
	scanf("%d",&w);
	
	if(l==w)
	{
		printf("\nSquare");
	}
	else
	{
		printf("\nRectangle");
	}
	
	return 0;
}
