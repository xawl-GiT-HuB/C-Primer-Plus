#include<stdio.h>

int one_three(void);
int two();

int main(){
    printf("Start\n");
    one_three();
    printf("Done\n");
    return 0;
}

int one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}
int two(void){
    printf("two\n");
}