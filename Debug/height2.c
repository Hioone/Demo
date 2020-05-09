#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("请输入身高(厘米): ");
    scanf("%d", &height);
    int temp = height/(0.3048*100) * 12;
    
    printf("%d %d\n", temp/12, temp%12);

    system("pause");
    return 0;
}