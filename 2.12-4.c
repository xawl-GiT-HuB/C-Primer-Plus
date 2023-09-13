#include<stdio.h>

int jolly(void);
int deny();

int main(){
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

int jolly(void){
    printf("句子甲\n");
}
int deny(void){
    printf("句子乙");
}