#include <stdio.h>

int main(void)
{
    int x, y, sum;
    printf("x?: ");
    scanf("%d", &x);
    printf("y?: ");
    scanf("%d", &y);
    sum = x / y;
    printf("%d / %d = %d", x, y, sum);
    return 0;
}