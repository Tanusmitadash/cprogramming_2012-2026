#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;

    printf("Enter num, a, b and val: ");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    res = replace_nbits_from_pos(num, a, b, val);

    printf("Result = %d\n", res);

    return 0;
}

int replace_nbits_from_pos(int num, int a, int b, int val)
{
    int mask;

    // Create a mask of 'a' bits and shift it to position b
    mask = ((1 << a) - 1) << (b - a + 1);

    // Clear the required bits in num
    num = num & (~mask);

    // Get last 'a' bits from val and shift them
    val = (val & ((1 << a) - 1)) << (b - a + 1);

    // Replace the bits
    return num | val;
}
