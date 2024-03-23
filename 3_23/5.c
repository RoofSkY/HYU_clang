#include <stdio.h>

int main(void)
{
    float f = 1234567890.12345678901234567890;
    double d = 1234567890.12345678901234567890;

    printf("%30.25f\n", f);
    printf("%20.25lf\n", d);
    return 0;
}