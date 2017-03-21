#include<stdio.h>

int main(){
	//类似PHP中的魔术常量
	printf("__DATE__ : %s\n",__DATE__);
	printf("__TIME__ : %s\n",__TIME__);
	printf("__FILE__ : %s\n",__FILE__);
	printf("__LINE__ : %d\n",__LINE__);
	printf("__STDC__ : %d\n",__STDC__);
	
	return 0;
}
