#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*  1.计算机随机想一个数，记在number变量里
        2.一个负责计数的变量count初始化为0
        3.让用户输入一个数字a
        4.count递增（加一）
        5.判断a和number的大小关系
        6.如果a和number是不相等的（无论大还是小），程序转会第三步
        7.否者，程序输出“猜中”的次数，然后结束
        */
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("我已经想好了一个1到100之间的数。");
    do {
        printf("请猜这个1到100之间的数：");
        scanf("%d", &a);
        count++;
        if ( a > number ) {
            printf("你猜的数大了。");
        } else if ( a < number ) {
            printf("你猜的数小了。");
        }
    } while ( a != number );
    printf("太好了，你用了%d此就猜到了答案。\n", count);

    system("pause");
    return 0;
}