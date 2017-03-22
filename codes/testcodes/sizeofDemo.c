#include<stdio.h>

int main(){
    printf("char: %d\n",sizeof(char));    //1
    printf("short: %d\n",sizeof(short));  //2
    printf("int : %d\n",sizeof(int));     //4
    printf("long: %d\n",sizeof(long));    //4

    printf("float: %d\n",sizeof(float));  //4
    printf("double: %d\n",sizeof(double));//8
    printf("long double: %d\n",sizeof(long double));  //12
    return 0;
}