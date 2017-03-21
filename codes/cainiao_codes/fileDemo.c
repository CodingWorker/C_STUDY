#include<stdio.h>

int main(){
	FILE *fp=fopen("./test.txt","r+");
	printf("写字符到输出流 %d",fputc(12,fp));
	fprintf(fp,"This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n",fp);
	//printf("关闭文件？%d",fclose(fp));
	fclose(fp);
	
	return 0;
}
