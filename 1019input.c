#include <stdio.h>

int main()
{
    int year, month, day;

    scanf("%d.%d.%d", &year, &month, &day);
    //%04d,%02d 등등 이런식으로 프린팅 하면 4자리의 문자를 출력하고 빈문자 ""는 0 으로 처리한다.
    printf("%04d.%02d.%02d", year, month, day);

    return 0;
}