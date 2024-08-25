#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float num1,num2,sum,sub,pro,div;
	int choice;
	while(1)
	{
		printf("\n**menu**\n");
			printf("first number");
		scanf("%f",&num1);
		printf("\n1.+\t2.-\t3.*\t4./\t5.'e'-exit\n");
			scanf("%d",&choice);
			printf("second number");
			scanf("%f",&num2);
	switch(choice)
	{
		case 1:	
		sum=num1+num2;
		printf("sum=%f",sum);
		break;
		case 2:
		
			sub=num1-num2;
		printf("difference=%f",sub);
		break;
		case 3: 
		pro=num1*num2;
		printf("product=%f",pro);
		break;
		case 4:	
		div=num1/num2;
		printf("division=%f",div);
		break;
		case 5 :exit(0);
		default:printf("wrong choice");
		
	}
}
getch();
}
