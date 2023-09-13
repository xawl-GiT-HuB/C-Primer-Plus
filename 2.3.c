#include <stdio.h>

    void butler(void); /* ANSI/ISO C函数原型,第1次是函数原型（prototype），告知编译器在程序中要使用该函数； */

    int main(void)
    {
        printf("①I will summon the butler function.\n");
        butler();  //第 2 次以函数调用（function call）的形式出现在 main()中；
        printf("③Yes. Bring me some tea and writeable DVDs.\n");
        return 0;
    }
    void butler(void) /* 函数定义开始,最后一次出现在函数定义（function definition）中，函数定义即是函数本身的源代码。*/
    {
        printf("②You rang, sir?\n");
    }