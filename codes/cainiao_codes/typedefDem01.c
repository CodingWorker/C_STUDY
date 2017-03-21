#include<stdio.h>
#include<string.h>

typedef struct Books{
	char name[20];
	int price;
	char author[20];
} Book;

int main(){

	Books book;
	strcpy(book.name,"aafa");
	book.price=12;
	strcpy(book.author,"me");
	printf("book.name: %s",book.name);
	printf("");

	return 0;
}
