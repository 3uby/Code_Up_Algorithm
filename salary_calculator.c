#include <stdio.h>

int main()
{
    int rate;          // 시급
    int hour, pay = 0; //일한시간 , 급여

    printf("일한 시간 : ");
    scanf("%d", &hour);
    printf("시급 : ");
    scanf("%d", &rate);

    if (hour <= 40)
        pay = hour * rate; // 시급 1.5 배 인상 해야함.
    else
        pay = 40 * rate + ((hour - 40) * rate * 1.5);
    // pay = hour ....  하면서 초과 금액을 계산시 50*6000이 되어서 390000 이 나옴 그러므로 기본값 40을 지정해주고 해야함
    printf("주별 급여 = %d", pay);
    return 0;
}
