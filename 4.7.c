/* width.c -- 字段宽度 */
#include <stdio.h>
#define PAGES 959
int main(void)
{
    //程序中使用星号（*）标出每个字段的开始和结束。
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);//第2个转换说明是%2d，其对应的输出结果应该是 2 字段宽度。因为待打印的整数有 3 位数字，所以字段宽度自动扩大以符合整数的长度。
    printf("*%10d*\n", PAGES);//第 3个转换说明是%10d，其对应的输出结果有10个空格宽度，实际上在两个星号之间有7个空格和3位数字，并且数字位于字段的右
    printf("*%-10d*\n", PAGES);return 0;
}
