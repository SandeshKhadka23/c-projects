#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int m,n,a[10][10],sum=0,i,j,choice;
	while(1)
	{
		printf("\n");
		printf("\n**menu**\n");
		printf("\nMatrix\n");
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
		scanf("%d",&choice);
		switch(choice)
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
				
		
		 
		 
		}
	
	}
getch();
}
