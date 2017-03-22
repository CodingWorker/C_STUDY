#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[100];
	char *descp;

	strcpy(name,"afafa");

	/*动态分配内存*/
	descp=malloc(200*sizeof(char));
	if(descp==NULL){
		fprintf(stderr,"ERROR-unable to allocate required memory\n");
	}else{
		strcpy(descp,"dfafafdfafadfa");
	}

	printf("Name=%s\n",name);
	printf("descp : %s\n",descp);
	
	return 0;
}
