#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;
    rv = printf("%d F is water's boiling point.\n", bph2o);//该语句执行了两项任务：打印信息和给变量赋值,程序用rv = printf(...);的形式把printf()的返回值赋给rv。。
    printf("The printf() function printed %d characters.\n", rv);
    return 0;
}
