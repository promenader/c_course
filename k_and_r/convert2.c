/**************************************************
 * Filename         :convert2.c
 * Description      :打印摄氏度到华氏度的对应表 浮点数版
 * Time             :2021/02/12 22:33:04
 * Author           :promenader
***************************************************/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}
