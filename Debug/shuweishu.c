#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("������һ����������");
    scanf("%d", &x);
    int n = 0;
    do{
        n++;
        x /= 10;
    } while( x > 0 );

    printf("��������%dλ��\n", n);

    system("pause");
    return 0;
}