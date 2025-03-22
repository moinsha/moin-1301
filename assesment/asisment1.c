#include<stdio.h>

add()
{
	int a,b;
	ptintf("enter number :");
	scanf("%d",&a);
	printf("enter number :");
	scanf("%d",&b);
	
	printf("Adition number :%d",a+b);
}
sub()
{
	int a,b;
	printf("enter number :");
	scanf("%d",&a);
	printf("enter number :");
	scanf("%d",&b);
	
	printf("subtrection number :%d",a-b);
}

mul()
{
	int a,b;
	printf("enter number :");
	scanf("%d",&a);
	printf("enter number :");
	scanf("%d",&b);
	
	printf("multiplication number :%d",a*b);
	
}
div()
{
	int a,b;
	printf("enter number :");
	scanf("%d",&a);
	printf("enter number :");
	scanf("%d",&b);
	
	printf("divition number :%.2f",a/b);
}
main()
{
	printf(".....................MENU.......................");
	int choice;
	printf("\n1.Adition");
	printf("\n2.subtrection");
	printf("\n3.multiplication");
	printf("n4.Division");
	while(1)
	{
	
	printf("enter choice :");
	scanf("%d",&choice);

    
	if(choice==1)
	{
		add();
		break;
	}
	else if(choice==2)
	{
		sub();
		break;
	}
	else if(choice==3)
	{
		mul();
		break;
	}
	else if(choice==4)
	{
		div();
		break;
		
	}
	else
	{
		printf("invalid choice!!!!!!!! :");
		break;
	}
}
}
