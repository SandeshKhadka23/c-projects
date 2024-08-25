#include<stdio.h>
#include<stdlib.h>
struct dob
{
	int y;
	int dd;
	int mm;
};
struct saver
{
	char name[20];
	int age;
	char address[20];
	long int id;
	float savedammount;
  int pin;
	struct dob d;
};
main()
{
	struct saver s[100];
	int i,p,deposit,withdraw,ch,count=0;
	long int B;
	char cha;
	while(1)
	{
	printf("\n\nEnter your choice\n");
	printf("1.New bank id details \n2.Check amount balance\n3.Deposit Money\n4.Withdraw Money\n5.Exit");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1  :
    do
	{
	    printf("Enter the information of saver\n");
        getchar();
		printf("Name:\n");
	    gets(s[i].name);
		printf("Age in years:\n");
		scanf("%d",&s[i].age);
		getchar();
		printf("Address:\n");
		gets(s[i].address);
		printf("Date of birth(d/m/y):\n");
		scanf("%d%d%d",&s[i].d.dd,&s[i].d.mm,&s[i].d.y);
		printf("Enter bank-id:");
		scanf("%ld",&s[i].id);
		printf("Ammount to be saved:");
		scanf("%f",&s[i].savedammount);
		printf("set pin:\n");
		printf("::pin should be of 4 numbers::\n");
		scanf("%d",&s[i].pin);
		printf("warning!!..Remember the pin for further usage..\n");
		printf("Do you want to add another record?\nif yes enter:y or Y\n if not enter n or N");
		cha=getche();
		count++;
	}while(cha=='y'||cha=='Y');
	break;
	case 2 :printf("saver bank information:\n");
	printf("please!!:::::::\nEnter your bank id to see your saved ammount in this bank::::\n");
	scanf("%ld",&B);
	printf("Enter Your Pin::");
	scanf("%d",&p);
	
	  for(i=0;i<count;i++)
	{
		if(s[i].id==B&&s[i].pin==p)
		{
	     printf("Name:%s\n Age in years:%d\n Address:%s\n Date of birth:%d/%d/%d\nBank-id:%d\nSaved-ammount:%f",s[i].name,s[i].age,s[i].address,s[i].d.dd,s[i].d.mm,s[i].d.y,s[i].id,s[i].savedammount);
	 }
	}
	break;
	case 3 :
	printf("please!!:::::::\nEnter your bank id::::\n");
	scanf("%ld",&B);
	printf("Enter Your Pin::");
	scanf("%d",&p);
	
	  for(i=0;i<count;i++)
	{
		if(s[i].id==B&&s[i].pin==p)
		{
			printf("Enter amount to be saved:\n");
			scanf("%d",&deposit);
			s[i].savedammount=	s[i].savedammount+deposit;
			printf("your new amount balance in this bank:Rs.%f",s[i].savedammount);
		}
	}
	break;
	case 4 :printf("please!!:::::::\nEnter your bank id::::\n");
	scanf("%ld",&B);
	printf("Enter Your Pin::");
	scanf("%d",&p);
	
	  for(i=0;i<count;i++)
	{
		if(s[i].id==B&&s[i].pin==p)
		{
			printf("Enter amount to be withdrawn:\n");
			scanf("%d",&withdraw);
			s[i].savedammount=	s[i].savedammount-withdraw;
			printf("your new amount balance in this bank:Rs.%f",s[i].savedammount);
		}
	}
	break;
	case 5 : exit(0);
	default:printf("wrong choice");
}
}
return 0; 
}
