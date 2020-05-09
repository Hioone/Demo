#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int one, two, five;
    printf("请输入整钱数：");
    scanf("%d", &x);
    // 下面利用嵌套的for循环进行遍历
    for ( one = 1; one < x*10; one++ ) {
        for ( two = 1; two < x*10/2; two++ ) {
            for ( five = 1; five < x*10/5; five++ ) {
                if ( one + two*2 + five*5 == x*10 ) {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元。\n", one, two, five, x);
                    goto out;
                }
            }
        }
    }
    out:
    system("pause");
    return 0;
}