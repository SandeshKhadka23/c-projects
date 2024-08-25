#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float num1,num2,sumation,sub,pro,div,fahrenheit,celcius,kilograms,grams,si,p,t,r,a1,b1,c1,r1,r2;
int choice,days,y2,m,d,x,y,p1,n,a[10][10],sum=0,i,j,ch,cH,b[10][10],c[10][10],k;
while(1)
{
	printf("\n");
	printf("\n***menu***\n");
printf("\n1.Mathematical simple calculations\n2.Converter\n3.Matrix\n4.power of number\n5.Simple Interest\n6.Roots of Quadratic equations\n7.exit from program\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	while(1)
	{
		printf("\n**menu**\n");
			printf("first number");
		scanf("%f",&num1);
		printf("\n1.+\t2.-\t3.*\t4./\t5.'e'-exit\n");
			scanf("%d",&ch);
			printf("second number");
			scanf("%f",&num2);
	switch(ch)
	{
		case 1:	
		sumation=num1+num2;
		printf("sum=%f",sumation);
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
		
	}}
	case 2 :
	while(1)
	{
		printf("\n");
		printf("\n**menu**\n");
		printf("\n1.fahrenheit to celcius\n2.celcius to fahrenheit\n3.kilograms to grams\n4.years,month,day to day\n5.exit a program\n");
		scanf("%d",&ch);
		switch(ch)
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
			scanf("%d%d%d",&y2,&m,&d);
			days=y*365+m*30+d;
			printf("total number of days=%d",days);
		 break;
		 	case 5 :exit(0);
			default:printf("wrong choice entered");
		 
		 
		}
	
	}
	case 3 :
		
while(1)
{
	printf("1.One matrix operation\n2.Two matrix operations");
	scanf("%d",&cH);
	switch(cH)
	{
		case 1 :while(1)
	{
		
		printf("\nMatrix:\n");
		printf("enter size of matrix");
				scanf("%d%d",&m,&n);
				printf("enter %d elements of an ",m*n);
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
		printf("\n1.display only\n2.transpose\n3.sum of all elements\n4.sum of individual row\n5.sum of individual column\n6.sum of main diagonal\n7.exit from program\n");
		scanf("%d",&ch);
		switch(ch)
		{
			
			case 1 :
				printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				
				
				break;
				case 2 :
						printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				printf("The transpose of matrix is:\n");
				for(i=0;i<n;i++)
				{
					for(j=0;j<m;j++)
					{
						printf("%d",a[j][i]);
					}
					printf("\n");
				}
				
				
				break;
				case 3 :printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						sum=sum+a[i][j];
					}
				}
				printf("The sum of all elements in matrix is %d",sum);
					
				
				break;
				case 4 :printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					sum=0;
					for(j=0;j<n;j++)
					{
						sum=sum+a[i][j];
					}
					printf("\nthe sum of %d row is %d\n",i+1,sum);
				}
					
				
				break;
				case 5 :printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					sum=0;
					for(j=0;j<n;j++)
					{
						sum=sum+a[j][i];
					}
					printf("the sum of %d column is %d\n",i+1,sum);
				}
				
				break;
				case 6 :
					printf("The all matrix elements are:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(i==j)
						{
						sum=sum+a[i][j];
						}
					}
				}
					printf("sum of main diagonal is %d",sum);
				
				
				
				break;
				case 7 :exit(0);
				default:printf("enter right choice");
				
		
		 
			
			break;
		}
			case 2 : while(1)
	{
		printf("\n");
		printf("\n**menu**\n");
		printf("\nMatrix\n");
		printf("enter size of first  matrix");
				scanf("%d%d",&m,&n);
				printf("enter %d elements of an ",m*n);
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&a[i][j]);
					}
				}
	     printf("enter size of second  matrix");
				scanf("%d%d",&m,&n);
				printf("enter %d elements of an ",m*n);
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						scanf("%d",&b[i][j]);
					}
				}
				printf("1.Matrix addition\n2.Matrix Multiplication\n3.exit");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1 :	printf("first matrix:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				printf("second matrix:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{ 
						printf("%d",b[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
					printf("Matrix after addition:\n");
					
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",c[i][j]);
					}
					printf("\n");
				}
				break;
				case 2 :printf("first matrix:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",a[i][j]);
					}
					printf("\n");
				}
				printf("second matrix:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",b[i][j]);
					}
					printf("\n");
				}
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
				for(i=0;i<n;i++)
				{
					for(j=0;j<n;j++)
					{
						c[i][j]=0;
						for(k=0;k<n;k++)
						{
							c[i][j]=c[i][j]+a[j][k]*b[k][j];
						}
					}
				}
				printf("\nThe final matrix after multiplication is:\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d",c[i][j]);
					}
					printf("\n");
					
				}
				break;
				case 3 :exit(0);
				default:printf("wrong choice");
				
				
				}
				
				
				
				break;
	}
}
	
	}
}
	case 4 :
	printf("enter power and number");
	scanf("%d%d",&x,&y);
	p1=pow(y,x);
	printf("result=%d",p1);
	break;
	case 5 :
	printf("enter principle,time(year),rate of interest");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("simple interest=RS%f",si);
	break;
	case 6 :
	printf("Ensure that the equation is in the form :a1X^2+b1X+c1");
	printf("enter the values of a1,b1,c1");
	scanf("%f%f%f",&a1,&b1,&c1);
	r1=(-b1+sqrt(b1*b1-4*a1*c1))/2*a1;
	r2=(-b1-sqrt(b1*b1-4*a1*c1))/2*a1;
	printf("first root=%f\nsecond root=%f",r1,r2);
	break;
	case 7 :exit(0);
	default:printf("wrong choice");
}
	
}
return 0;
}
