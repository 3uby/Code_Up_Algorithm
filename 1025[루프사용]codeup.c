#include <stdio.h>

int main()
{
    int i;
    //a,b 에 주소를 입력해줌 총 5개 01234
    int a[5];
    int b[5] = {1, 10, 100, 1000, 10000};

    scanf("%1d%1d%1d%1d%1d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for (i = 4; i > -1; i--)
    {
        printf("[%d]\n", a[4 - i] * b[i]);
    }

    return 0;
}
