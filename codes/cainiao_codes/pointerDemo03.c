#include<stdio.h>

int main(){
	int val=12;
	int *pi;
	pi=&val;

	printf("before:\n");
	printf("val=%d\n",val);
	printf("&val=%d\n",&val);
	printf("pi=%d\n",pi);
	printf("*pi=%d\n",*pi);

	(*pi)++;
	printf("after:\n");
	printf("val=%d\n",val);
	printf("&val=%d\n",&val);
	printf("pi=%d\n",pi);
	printf("*pi=%d\n",*pi);

	return 0;
}
