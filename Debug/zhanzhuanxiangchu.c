#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 辗转相除法
    int u, v;
    printf("请输入两个整数：");
    scanf("%d %d", &u, &v);
    while ( v != 0 ) {
        int temp = u % v;
        u = v;
        v = temp;
    }
    printf("最大公约数是%d\n", u);

    system("pause");
    return 0;
}