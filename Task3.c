#include<stdio.h>
main()
{
	int s1,s2,s3,sum;
	float avg;
	printf("Enter s1 marks");
	scanf("%d",&s1);
	printf("Enter s2 marks");
	scanf("%d",&s2);
	printf("Enter s3 marks");
	scanf("%d",&s3);
	sum=s1+s2+s3;
	avg=sum/3;
	printf("sum=%d,avg=%f",sum,avg);
	
}
