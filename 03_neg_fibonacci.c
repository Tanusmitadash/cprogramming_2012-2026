#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Negative Fibonacci series:\n");

    printf("%d %d ", a, b);

    for (i = 2; i < n; i++)
    {
        next = a - b;
        printf("%d ", next);

        a = b;
        b = next;
    }

    return 0;
}
