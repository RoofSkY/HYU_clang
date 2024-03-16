#include <stdio.h>

int main(void)
{
    int n = 3;
    for (int i = 1; i <= 3; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}
