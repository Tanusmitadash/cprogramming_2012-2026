#include <stdio.h>

int print_bits(int, int);

int main()
{
    int num, n;

    printf("Enter num, n:\n");
    scanf("%d%d", &num, &n);

    printf("Binary form of %d: ", num);
    print_bits(num, n);

    return 0;
}

int print_bits(int num, int n)
{
    int i;

    for (i = n - 1; i >= 0; i--)
    {
        if (num & (1 << i))
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}
