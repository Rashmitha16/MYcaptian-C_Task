#include<stdio.h> 
struct book
{
	char title[50];
	char author[50];
	char genre[20];
}b;

void display()
{
	printf("BOOK DETAIL\n");
	printf("\nTITLE :- %s",b.title);
	printf("\nAUTHOR :- %s",b.author);
	printf("\nGENERE :- %s",b.genre);
}

main()
{
	printf("Enter the title of the book\n");
	gets(b.title);
	printf("Enter the author of the book\n");
	gets(b.author);
	printf("Enter the genre of the book\n");
	gets(b.genre);
	display();
}
