#include<stdio.h>
main()
{
	char fn[20],ln[20];
	printf("Enter the firstname ");
	scanf("%s",&fn);
	printf("Enter the lastname ");
	scanf("%s",&ln);
	strcat(fn,ln);
	printf("Your name is %s",fn);
}
