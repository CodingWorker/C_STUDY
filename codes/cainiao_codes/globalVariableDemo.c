#include<stdio.h>

/*定义全局变量*/
int a;
int b=10;
int c=12;  //可以在定义的时候初始化

int main(){
	/*初始化全局变量*/
	a=1;
	
	/*同名局部变量会覆盖全局变量*/
	c=10;
	
	printf("values: a=%d, b=%d, c=%d",a,b,c);
	return 0;
}

