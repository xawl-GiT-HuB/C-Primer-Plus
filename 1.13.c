#include<stdio.h>

int main(void)
{
    float inch;    //定义浮点型变量 英寸
    const double T = 2.54;   //定义转换变量
    printf("输入英寸值：");
    scanf("%d",&inch);  //必须+"&"，变量inch的值并修改

    float cm;
    cm=T*inch;
    printf("厘米值为：%.2f\n",cm);  //".2"保留小数点后两位
    return 0;
}