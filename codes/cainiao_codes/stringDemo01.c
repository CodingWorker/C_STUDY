#include<stdio.h>

int main(){
	char greeting[]="Hello";
	char *pc;
	pc=(&greeting[0]);

	printf("&char=%d\n",&greeting);
	printf("pc=%d\n",pc);
	printf("*pc=%c",*pc);

	return 0;
}
