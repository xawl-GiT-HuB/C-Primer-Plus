#include<stdio.h>
#define dayofyear 365

int main(){
    int age,days;
    printf("输入年龄：");
    scanf("%d",&age);
    days=age*dayofyear;
    printf("%d\n",age);  
    printf("%d\n",days);  
    return 0;
}