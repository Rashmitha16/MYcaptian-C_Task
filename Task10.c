#include<stdio.h>
main()
{
	int n,i,j;
	printf("enter a number ");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	 {
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
