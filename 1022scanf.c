#include <stdio.h>

int main()
{
    //20의 문자를 넘지않는다.
    char data[2001];
    //Segmentation fault 오류발생 char data; >>char data[2001]로 변경
    scanf("%[^\n]s", data);
    //fgets 함수는 공백도 받아들인다.
    // fgets(data, 2001, stdin);

    printf("%s\n", data);

    return 0;
}