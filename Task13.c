#include<stdio.h>
main()
{
	int a[50],i,n,max,min;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter the Array:");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	    max=min=a[0];
	for(i=1;i<n;++i)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("The largest element is %d",max);
	printf("\nThe smallest element is %d",min);
}
