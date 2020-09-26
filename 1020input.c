#include <stdio.h>

int main()
{
    int adress1, adress2;

    scanf("%6d-%7d", &adress1, &adress2);
    printf("%06d%07d", adress1, adress2);

    return 0;
}