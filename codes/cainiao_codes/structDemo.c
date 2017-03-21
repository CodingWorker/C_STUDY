#include<stdio.h>
#include<string.h>

struct Book{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main(){
	struct Book Book1;
	struct Book Book2;
	strcpy(Book1.title,"c programming");
	strcpy(Book1.author,"Nuha Ali");
	strcpy(Book1.subject,"c programming tutorial");

	Book1.book_id=6495407;

	printf("Book 1 title: %s\n",Book1.title);

	return 0;
}

