#include <stdio.h>

int main(void)
{
    short s_money = 32767;
    s_money = s_money + 1;
    printf("%d\n", s_money);

    return 0;
}