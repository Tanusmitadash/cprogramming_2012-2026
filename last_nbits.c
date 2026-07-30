#include <stdio.h>

int main()
{
    int num, n, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = num & ((1 << n) - 1);

    printf("The last %d bits = %d\n", n, result);

    return 0;
}
