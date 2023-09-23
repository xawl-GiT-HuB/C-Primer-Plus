/* print1.c - 演示printf()的一些特性   printf()函数的参数的数目不确定，编译器无法检查*/
#include <stdio.h>
    int main(void)
    {
        int ten = 10;
        int two = 2;
        printf("Doing it right: ");
        printf("%d minus %d is %d\n", ten, 2, ten - two);
        printf("Doing it wrong: ");
        printf("%d minus %d is %d\n", ten); // 遗漏2个参数，打印出来的值为内存中的任意值
        return 0;
}
