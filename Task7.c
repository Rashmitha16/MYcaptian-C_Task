#include<stdio.h>
main()
{
	int i,n,m,temp,rev=0;
	printf("enter a number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		m=n%10;
		rev=rev*10+m;
		n=n/10;	
	}
	if(rev==temp)
	printf("palindrome");
	else
	printf("not a palindrome");
}
