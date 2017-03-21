#include<stdio.h>

int main(){
	#define MAX_SIZE 20
	#define MIN_SIZE 1
#if defined(MAX_SIZE)
	printf("MAX_SIZE : %d\n",MAX_SIZE);
#endif

#if defined(MAX_SIZE)
	printf("MAX_SIZE is defined!\n");
#endif

#if !defined(SIZE)
	printf("SIZE is not defined\n");
#endif


	return 0;
}
