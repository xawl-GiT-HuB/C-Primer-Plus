#include<stdio.h>
int main(){
    char ming[20];
    char xing[20];
    printf("输入名：");
    scanf("%s",ming);
    printf("输入姓：");
    scanf("%s",xing);
    printf("你好，%s %s!",xing,ming);
    return 0;
}