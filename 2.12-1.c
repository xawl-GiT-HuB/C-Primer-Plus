#include<stdio.h>
#define FName "姓"
#define LName "名"

int main(){
    printf("%s %s\n",FName,LName);  //一次
    printf("%s\n%s\n",FName,LName);  //二次
    printf("%s",FName);  //三次
    printf("%s\n",LName);  //四次

    return 0;

}