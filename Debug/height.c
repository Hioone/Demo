#include <stdio.h>
#include <stdlib.h>

/* Ӣ��Ӣ�绻��Ϊ�� */
int main()
{
    // Ӣ�ߡ�Ӣ�绻��Ϊ��
    const double COEFFICIENT = 0.3048;
    printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ��,"
        "������\"5 7\"��ʾ5Ӣ��7Ӣ��: ");
    double foot, inch;
    scanf("%lf %lf", &foot, &inch);
    printf("�����%f�ס�", ((foot + inch/12) * COEFFICIENT));

    system("pause");
    return 0;
}
