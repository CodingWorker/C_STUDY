//引入源文件
#include<stdio.h>

//定义常量
#define MAX_SIZE 20


int main(){
	printf("before: MAX_SIZE : %d\n",MAX_SIZE);
#undef MAX_SIZE
	//printf("after: MAX_SIZE : %d\n",MAX_SIZE);  //这里编译不通过
#define MAX_SIZE 10
	printf("after: MAX_SIZE : %d\n",MAX_SIZE);
#ifndef MESSAGE
	#define MESSAGE "You wish!"
#endif
	printf("MESSAGE : %s\n",MESSAGE);

#ifdef DEBUG
	printf("In the Debug mod!");
#endif
	return 0;
}

