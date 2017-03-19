#include<stdio.h>

void changeValue(int []);

int main(){
	int list[]={1,2,3};
	printf("before: list[0]=%d\n",list[0]);
	changeValue(list);
	printf("after: list[0]=%d\n",list[0]);
	return 0;
}

void changeValue(int arr[]){
	arr[0]=12;
}
