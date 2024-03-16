#include <stdio.h>

int main()
{
    int n, m;

    printf("첫 번째 숫자: ");
    scanf("%d", &n);
    printf("두 번째 숫자: ");
    scanf("%d", &m);

    printf("\n합: %d\n", n + m);
    printf("차: %d\n", n - m);
    printf("곱: %d\n", n * m);
    printf("몫: %d\n", n / m);
    printf("나머지: %d\n", n % m);

    return 0;
}