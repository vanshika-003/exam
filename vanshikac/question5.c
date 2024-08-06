#include<stdio.h>
#include<conio.h>

void main()
{
	int  i,count=0,n;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	
	do
	{
		printf("%d",i);
		count++;
		i++;
	}while(i<=n);
	printf("count:%d \n",count);
}