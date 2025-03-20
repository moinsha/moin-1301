
#include<stdio.h>
main()

{
	int n;            // data members 
	printf("Enter year: ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}
