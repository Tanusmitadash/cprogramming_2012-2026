#include <stdio.h>

int main()
{
    int num, val, n, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the value: ");
    scanf("%d", &val);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = (num & ~((1 << n) - 1)) | (val & ((1 << n) - 1));

    printf("Result = %d\n", result);

    return 0;
}
