#include<stdio.h>

int main(){
	FILE *fp=fopen("./test.txt","r+");
	printf("读取一个字符%c",fgetc(fp));
	char buff[100];
	//读取文件内容到缓冲区
	fgets(buff,50,fp);
	for(int i=0;i<20;i++){
		printf("%c\n",buff[i]);
	}
	fclose(fp);
	return 0;
}
