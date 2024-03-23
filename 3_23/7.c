#include <stdio.h>
#define PI 3.141592

int main(void)
{
    int n;
    scanf("%d", &n);

    double x = n * n * PI;
    double y = 2 * n * PI;

    printf("%lf\n", x);
    printf("%lf\n", y);

    return 0;
}