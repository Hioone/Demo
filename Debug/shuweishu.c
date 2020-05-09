#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("请输入一个正整数：");
    scanf("%d", &x);
    int n = 0;
    do{
        n++;
        x /= 10;
    } while( x > 0 );

    printf("正整数有%d位。\n", n);

    system("pause");
    return 0;
}