#include <stdio.h>

int main(void)
{
    int feet, fathoms;  //声明两个变量feet，fathoms
    fathoms = 2;  //赋值
    feet = 6 * fathoms;  //乘法
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);  //说明待打印的值不一定是变量，只要是合适类型的项均可
    return 0;
}