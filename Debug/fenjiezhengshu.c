#include <stdio.h>
#include <stdlib.h>
int main()
{
    /* 13425 / 10000 -> 1
    13425 % 10000 -> 3425
    10000 / 10    -> 1000

    3425 / 1000 -> 3
    3425 % 1000 -> 425
    1000 / 10   -> 100

    425 / 100   -> 4
    425 % 100   -> 25
    100 / 10    -> 10

    25 / 10     -> 2
    25 % 10     -> 5
    10 / 10     -> 1

    5 / 1   -> 5
    5 % 1   -> 5
    1 / 10  -> 0 */
    int x;
    scanf("%d", &x);
    int t = x;
    int mask = 1;
    while ( t > 9 ) {
        t /= 10;
        mask *= 10;
    }
    // printf("%d", mask);
    do {
        int d = x / mask;
        printf("%d", d);
        if ( mask > 9 ) {	// 这里必须是mask
            printf(" ");
        }
        x %= mask;
        mask /= 10;
    } while ( mask > 0);	// 这里也必须是mask
    printf("\n");

	system("pause");
    return 0;
}



