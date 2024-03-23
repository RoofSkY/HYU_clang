#include <stdio.h>

int main(void)
{
    int n = 100;
    int m = 200;
    int tmp;

    tmp = n;
    n = m;
    m = tmp;

    printf("%d %d\n", n, m);

    return 0;
}