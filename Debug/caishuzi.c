#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*  1.����������һ����������number������
        2.һ����������ı���count��ʼ��Ϊ0
        3.���û�����һ������a
        4.count��������һ��
        5.�ж�a��number�Ĵ�С��ϵ
        6.���a��number�ǲ���ȵģ����۴���С��������ת�������
        7.���ߣ�������������С��Ĵ�����Ȼ�����
        */
    srand(time(0));
    int number = rand()%100+1;
    int count = 0;
    int a = 0;
    printf("���Ѿ������һ��1��100֮�������");
    do {
        printf("������1��100֮�������");
        scanf("%d", &a);
        count++;
        if ( a > number ) {
            printf("��µ������ˡ�");
        } else if ( a < number ) {
            printf("��µ���С�ˡ�");
        }
    } while ( a != number );
    printf("̫���ˣ�������%d�˾Ͳµ��˴𰸡�\n", count);

    system("pause");
    return 0;
}