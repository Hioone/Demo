#include <stdio.h>
#include <stdlib.h>

/* 英尺英寸换算为米 */
int main()
{
    // 英尺、英寸换算为米
    const double COEFFICIENT = 0.3048;
    printf("请分别输入身高的英尺和英寸,"
        "如输入\"5 7\"表示5英尺7英寸: ");
    double foot, inch;
    scanf("%lf %lf", &foot, &inch);
    printf("身高是%f米。", ((foot + inch/12) * COEFFICIENT));

    system("pause");
    return 0;
}
