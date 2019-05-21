#include<stdio.h>
main() 
{
	int choice; 
	float c,f; 
	do 
	{ 
		printf("\nenter your choice : \n 1. celicius to fahrenheit \n 2. fahrenheit to celcius \n 3. exit\n"); 
		scanf("%d",&choice); 
		switch(choice) 
		{
		    case 1: printf("enter the temperature in celsius : \n"); 
		   		    scanf("%f",&c);
				    f = (1.8 * c) + 32; 
					printf("the temperature in fahrenheit is : %f \n",f); 
					break;
			case 2: printf("enter the temperature in fahrenheit : \n"); 
					scanf("%f",&f); 
					c = 5 * (f - 32)/9; 
					printf("the temperature in celicius is : %f \n",c); 
					break;
			case 3: exit(0); 
			default:printf("Invalid choice");
	    }
	}while(choice!= 3);
}
