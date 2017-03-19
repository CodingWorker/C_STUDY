#include<stdio.h>

void test();

int main(){
	for(int i=0;i<10;i++){
		test();
	}
	return 0;
}

void test(){
	static int sValue=12;

	printf("%d\n",sValue++);
}
