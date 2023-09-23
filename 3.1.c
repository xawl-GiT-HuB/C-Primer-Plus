/* platinum.c -- your weight in platinum */
#include <stdio.h>
    int main(void)
    {
        float weight; /* 你的体重  浮点型变量*/
        float value; /* 相等重量的猪猪价值 手动狗头保命*/
        
        printf("Are you worth your weight in pig?\n");
        printf("Let's check it out.\n");
        printf("Please enter your weight in kg: ");
        
        scanf("%f", &weight);/* 获取用户的输入 */
        
        value = 17.0 * weight * 2;/* 假设猪猪的价格是每500g/¥17，1kg=2*500g */

        printf("Your weight in platinum is worth ¥%.2f.\n", value);
        printf("You are easily worth that! If pig prices drop,\n");
        printf("Eat more to maintain your value.\n");

    return 0;
}