#include <stdio.h>

int main()
{
    char ch[10];

    scanf("%s", ch);
    //for이 ch[i]가 NULL 일때가지 반복  NULL 이라면 무한루프 종료
    for (int i = 0; ch[i] != '\0'; i++)
    {
        printf("\'%c\'\n", ch[i]);
    }

    return 0;
}
