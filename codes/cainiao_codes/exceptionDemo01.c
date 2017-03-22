#include<stdio.h>
#include<errno.h>

int main(){
	fprintf(stderr,"错误",errno);

	return 0;
}
