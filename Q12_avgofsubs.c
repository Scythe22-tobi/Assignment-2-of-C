#include<stdio.h>
int main()
{
	/*Q12.Scan marks of 4 subjects of a student.If average of 4 subjects is greater than 75,
	print message DISTINCTION,else print message "STUDY MORE"*/
	
	int sub1,sub2,sub3,sub4;
	
	printf("\nEnter the marks of subject 1=");
	scanf("%d",&sub1);
	
	printf("\nEnter the marks of subject 2=");
	scanf("%d",&sub2);
	
	printf("\nEnter the marks of subject 3=");
	scanf("%d",&sub3);

	printf("\nEnter the marks of subject 4=");
	scanf("%d",&sub4);
	
	if((sub1+sub2+sub3+sub4)/4.0 >=75 )
	{
		printf("\nDistinction");
	}
	else
	{
		printf("\nStudy more");
	}
	
	return 0;
}
