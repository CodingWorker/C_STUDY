#include<stdio.h>

int main(){
	int num;
	int *pnum;
	int **ppnum;

	num=12;
	pnum=&num;//将num的地址赋值给指针变量
	ppnum=&pnum;
	
	printf("the value of num is : %d\n",num);
	printf("the value of pnum is : %x\n",pnum);
	printf("the value of pnum-> is %d\n",*pnum);

	printf("the value of ppnum is : %x\n",ppnum);
	printf("the value of ppnum-> is %x\n",*ppnum);
	printf("the value of ppnum-> -> is %d\n",**ppnum);
	return 0;
}
