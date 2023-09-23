//第三章 数据和C 练习题

//1. 通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。


//2. 编写程序，要求提示输入一个ASCII码值（如：66），然后打印出输入的字符。

#include <stdio.h>

int main(void)
{
    int asc_num;
    printf("请输入ASCII码值（如66）: \n");
    scanf("%d",&asc_num);
    printf("对应的字符为：%c \n",asc_num);
    return 0;
}

/*3. 编写一个程序，发出一声警报，然后打印出下面的文本。
    ```
    Startled by the sudden sound,Sally Shouted,
    "By the Great Pumpkin,What was that!"
    */
#include <stdio.h>
/*提示：ANSI C \a 表示警报*/
int main(void)
{
    printf("\a");
    printf("Startled by the sudden sound,Sally Shouted,\n");
    printf("\"By the Great Pumpkin,What was that!\"\n");
    return 0;
}

/*4. 编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。如果系统支持，再打印成p计数法（即十六进制计数法）。按以下个数输出（实际显示的指数位数因系统而异）：
    Enter a floating-point value：64.25
    fixed-point notation：64.250000
    exponential notation：6.425000e+01
    p notation：0x1.01p+6
    */
#include <stdio.h>

int main(void)
{
    float value;
    printf("Enter a float-point value: \n");
    scanf("%f",&value);
    printf("fixed-point notation : %.6f \n",value);
    printf("exponential notation : %e \n",value);
    printf("p notation : %p \n",value);
    return 0;
}

//5. 一年大约有3.156 * 10^7 秒，编写程序，提示用户输入年龄，然后显示该年龄对应的秒数。

#include <stdio.h>
/*该chapter未学习#define语句，故不使用*/
int main(void)
{
    float years_second = 3.156e+7;
    int age;
    printf("please input your age : \n");
    scanf("%d",&age);
    float age_to_second = years_second * age;
    printf("your age is equal to %e second \n",age_to_second);
    return 0;
}


//6. 一个水分子的质量约为3.0*10^-23克，1夸脱水大约是950克。编写程序，提示用户输入水的夸脱数，并显示水分子的数量。（个人备注：由于该章节还没有学习#define，所以就不再使用#define方式去定义常量。）

#include <stdio.h>

int main(void)
{
    float one_quality = 3.0e-23;
    int one_quart = 950;
    int quart;
    printf("please input water quart_num : \n");
    scanf("%d",&quart);
    /*下面两个语句可合并为同一个*/
    float total_quality = quart * one_quart;
    float  num = total_quality / one_quality;
    printf("water molecule num is %e \n",num);
    return 0;
}


//7. 1英寸相当于2.54 厘米。编写程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。

#include <stdio.h>

int main(void)
{
    float one_inch_cm = 2.54;
    float cm,inch;
    printf("please input your height (/inch) : \n");
    scanf("%f",&inch);
    cm = inch * one_inch_cm;
    printf("your height is %.2f cm \n",cm);
    return 0;
}




//8. 在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。编写程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等量。

#include <stdio.h>

int main(void)
{
    float one_cup,one_pint,one_ounce,one_spoon,one_teaspoon;
    printf("please input your cup_num : \n");
    scanf("%f",&one_cup);

    one_pint = one_cup/2;
    one_ounce = 8;
    one_spoon = one_ounce * 2;
    one_teaspoon = one_spoon * 3;

    printf("%.2f cup is %.2f pint is %.2f ounce is %.2f spoon is %.2f teaspoon \n",
            one_cup,one_pint,one_ounce,one_spoon,one_teaspoon);

    return 0;
}