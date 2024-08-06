#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	printf("enter the number:");
	scanf("%d ",&n);
	do
	{
		printf("%d",i);
		sum=sum+i;
		i+=2;
	}while(i<=n);
	printf("sum is:%d \n",sum);
}