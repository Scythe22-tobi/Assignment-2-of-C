#include<stdio.h>
int main()
{
	/*Q10.Scan length and width of a rectangle , find area and perimeter of rectangle.
	If area is greater than 100, print message "Big rectangle" else print message 
	"Small Rectangle"*/
	
	int l,w;
	printf("\nEnter length =");
	scanf("%d",&l);
	
	printf("\nEnter width =");
	scanf("%d",&w);
	
	if((l*w)>100)
	{
		printf("\nBig rectangle");
	}
	else
	{
		printf("\nSmall rectangle");
	}
	
	return 0;

}
