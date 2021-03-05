/**************************************************
 * Filename         :convert3.c
 * Description      :打印摄氏度到华氏度的对应表
 * Time             :2021/02/15 21:11:57
 * Author           :promenader
***************************************************/
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char const *argv[])
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
