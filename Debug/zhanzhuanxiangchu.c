#include <stdio.h>
#include <stdlib.h>

int main()
{
    // շת�����
    int u, v;
    printf("����������������");
    scanf("%d %d", &u, &v);
    while ( v != 0 ) {
        int temp = u % v;
        u = v;
        v = temp;
    }
    printf("���Լ����%d\n", u);

    system("pause");
    return 0;
}