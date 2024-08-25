#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int x,y,p;
	printf("enter power and number");
	scanf("%d%d",&x,&y);
	p=pow(y,x);
	printf("result=%d",p);
	getch();
}
