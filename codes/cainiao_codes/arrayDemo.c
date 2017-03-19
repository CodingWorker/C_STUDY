#include<stdio.h>

int main(){
	
	/*声明一个整型数组,声明的时候必须指定数组的长度*/
	int list[5];
	list[0]=1;
	printf("list[0]=%d\n",list[0]);

	/*定义的时候初始化*/
	int list1[2]={1,2};
	printf("list1[0]=%d\n",list1[0]);
	
	/*声明定义并初始化数组*/
	int list2[]={1,2,4};
	printf("list2[0]=%d\n",list2[0]);
	return 0;
}
