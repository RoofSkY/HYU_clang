#include <stdio.h>

int main()
{
    int n, m;

    printf("ù ��° ����: ");
    scanf("%d", &n);
    printf("�� ��° ����: ");
    scanf("%d", &m);

    printf("\n��: %d\n", n + m);
    printf("��: %d\n", n - m);
    printf("��: %d\n", n * m);
    printf("��: %d\n", n / m);
    printf("������: %d\n", n % m);

    return 0;
}