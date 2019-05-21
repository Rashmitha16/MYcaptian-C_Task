#include<stdio.h>
main()
{
	int x,y,i;
	printf("Enter a number");
	scanf("%d",&x);
	for(i=0;i<=10;i++)
	{
		y=x*i;
		printf("\n%d*%d=%d",x,i,y);
	}
	printf("\n");
}
