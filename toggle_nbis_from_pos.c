#include <stdio.h>

int toggle_nbits_from_pos(int, int, int);

int main()
{
    int num, n, pos, res = 0;

    printf("Enter num, n and pos: ");
    scanf("%d %d %d", &num, &n, &pos);

    res = toggle_nbits_from_pos(num, n, pos);

    printf("Result = %d\n", res);

    return 0;
}

int toggle_nbits_from_pos(int num, int n, int pos)
{
    int mask;

    mask = ((1 << n) - 1) << (pos - n + 1);

    return num ^ mask;
}
