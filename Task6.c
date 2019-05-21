#include<stdio.h>
int main()
{
	int n,count=0,sum=0,r1,r2,y;
	printf("enter a number");
	scanf("%d",&n);
	int temp=n;
	while(temp!=0)
	{
		r1=temp%10;
		count++;
		temp=temp/10;
	}
	int temp1=n;
	while(temp1!=0)
	{
		r2=temp1%10;
		y=pow(r2,count);
		sum=sum+y;
		temp1=temp1/10;
	}
	if(sum==n)
	{
		printf("it is an armstrong number");
		
	}
	else
	{
		printf("it is not an armstrong number");
	}
	return 0;
}
