#include <stdio.h>
#include <stdlib.h>

int main()
{
    // �ж�һ�����ǲ�������
    int x;
    printf("������һ�����֣�");
    scanf("%d", &x);

    int i;
    int isPrime = 1;    // x������
    for ( i=2; i<x; i++ ) {
        if ( x % i == 0 ) {
            isPrime = 0;
            break;
        }
    }
    if ( isPrime == 1 ) {
        printf("������\n");
    } else {
        printf("��������\n");
    }
    system("pause");
    return 0;
}