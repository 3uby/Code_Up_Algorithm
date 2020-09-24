#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f%f", &x, &y);
    //.3f 을 입력하면 3째자리까지 출력
    //ex) 5.3f 는 5개 중에서 소수점 3까지 출력 xx.xxx
    printf("%.2f %.2f\n", x, y);

    return 0;
}