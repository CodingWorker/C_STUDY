#include<stdio.h>
#include<string.h>

struct Books{
	char name[50];
} book;

int main(){
	strcpy(book.name,"c study");
	printf("the name of book : %s",book.name);
        struct Books *book_pointer;
	book_pointer=&book;
	printf("value of *pointer: %d\n",book_pointer);
	printf("value of pointer->name : %s\n",book_pointer->name);
	return 0;
}
