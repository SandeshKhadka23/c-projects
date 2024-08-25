#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	float fahrenheit,celcius,kilograms,grams;
	int choice,days,y,m,d;
	while(1)
	{
		printf("\n");
		printf("\n**menu**\n");
		printf("\n1.fahrenheit to celcius\n2.celcius to fahrenheit\n3.kilograms to grams\n4.years,month,day to day\n5.exit a program\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :printf("enter the temperature in fahrenheit");
			scanf("%f",&fahrenheit);
			celcius=(fahrenheit-32)/1.8;
			printf("celcius temperature=%f",celcius);
		 break;
		 	case 2 :printf("enter the temperature in celcius");
			scanf("%f",&celcius);
			fahrenheit=1.8*celcius+32;
			printf("fahrenheit temperature=%f",fahrenheit);
		 break;
		 	case 3 :printf(" enter quantity in kilograms");
			scanf("%f",&kilograms);
		grams=kilograms*1000;
			printf("quantity in grams=%f",grams);
		 break;
		 	case 4 :printf("enter time in format(y/m/d) to convert in total days");
			scanf("%d%d%d",&y,&m,&d);
			days=y*365+m*30+d;
			printf("total number of days=%d",days);
		 break;
		 	case 5 :exit(0);
			default:printf("wrong choice entered");
		 
		 
		}
	
	}
getch();
}
