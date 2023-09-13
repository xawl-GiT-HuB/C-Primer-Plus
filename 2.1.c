#include <stdio.h>

int main(void)  /*1.圆括号有什么功能？用于识别main()是一个函数
                  2.int是main()函数的返回类型。这表明main()函数返回的值是整数。返回到哪里？返回给操作系统。
                  3.函数名后面的圆括号中包含一些传入函数的信息。该例中没有传递任何信息。因此，圆括号内是单词void*/ 
{
    int num;    /*这行代码叫作声明（declaration）。声明是C语言最重要的特性之一。
                  在该例中，声明完成了两件事。其一，在函数中有一个名为num的变量（variable）。
                  其二，int表明num是一个整数（即，没有小数点或小数部分的数）。
                  int是C语言的一个关键字（keyword），示例中的num是一个标识符（identifier）*/

//在C语言中，所有变量都必须先声明才能使用。这意味着必须列出程序中用到的所有变量名及其类型。

    num = 1;   //为num赋一个值
    printf("I am a simple ");   //使用printf()函数
    printf("computer.\n");  //\n换行
    printf("My favorite number is %d because it is first.\n",num); //%d相当于是一个占位符，其作用是指明输出num值的位置。
    return 0;  //C函数可以给调用方提供（或返回）一个数。目前，可暂时把该行看作是结束main()函数的要求。
}