#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 判断一个数是不是素数
    int x;
    printf("请输入一个数字：");
    scanf("%d", &x);

    int i;
    int isPrime = 1;    // x是素数
    for ( i=2; i<x; i++ ) {
        if ( x % i == 0 ) {
            isPrime = 0;
            break;
        }
    }
    if ( isPrime == 1 ) {
        printf("是素数\n");
    } else {
        printf("不是素数\n");
    }
    system("pause");
    return 0;
}