#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    // whileѭ������׳�
    /* int i = 1;
    while( i <= n ) {
        fact *= i;
        i++;
    }
    printf("%d!=%d\n", n, fact); */
    // forѭ������׳�
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    /* for(int i = n; i > 1; i--) {
        fact *= n;
    } */
    printf("%d!=%d\n", n, fact);

    system("pause");
    return 0;
}