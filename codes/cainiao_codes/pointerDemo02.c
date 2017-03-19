#include<stdio.h>

int main(){
	int var=20;/*实际变量的声明*/
	int *pi;/*指针变量的声明*/

	pi=&var;   /*在指针变量中存储var的地址*/
	printf("Address of var variable : %x\n",&var);

	/*在指针变量中存储的地址*/
	printf("Address stored in pi variable : %x\n",pi);

	/*使用指针访问值*/
	printf("value of *pi variable : %d\n",*pi);

	return 0;
}
