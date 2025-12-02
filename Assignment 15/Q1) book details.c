#include<stdio.h>
typedef struct book 
{
	int id;
	char bnme[20];
	char author[20];
	int price;
	
}book;
void main()
{
	book b1[3];
	for(int i=0;i<3;i++)
	{
		printf("book details ::\n",i+1);
		printf("Id::");
		scanf("%d",&b1[i].id);
		printf("bookname::");
		scanf("%s",&b1[i].bnme);
		printf("author::");
		scanf("%s",&b1[i].author);
		printf("price::");
		scanf("%d",&b1[i].price);
	}
	for(int i=0;i<3;i++)
	{
		printf("id=%d\n",&b1[i].id);
		printf("bookname=%s\n",&b1[i].bnme);
		printf("author=%s\n",&b1[i].author);
		printf("price=%d\n",&b1[i].price);
	}	
}