#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    int min;
    int ret=0;
    scanf("%d %d",&a,&b);
    if(a>b) {
        min=b;
    } else {
        min=a;
    }
    int i;
    for(i=1;i<=min;i++) {
        if(a%i==0) {
            if(b%i==0) {
                ret=i;
            }
        }
    }
    printf("%d和%d的最大公约数是%d\n",a,b,ret);
    system("pause");
    return 0;
}