#include <stdio.h>

int main()
{
    int a, d, n, i;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("AP Series:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a + i * d);
    }

    return 0;
}
/*
#include <stdio.h>

int main()
{
    int a, r, n, i, term;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("GP Series:\n");

    term = a;

    for(i = 0; i < n; i++)
    {
        printf("%d ", term);
        term = term * r;
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a, d, n, i;
    float term;

    printf("Enter first term of AP: ");
    scanf("%d", &a);

    printf("Enter common difference: ");
    scanf("%d", &d);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("HP Series:\n");

    for(i = 0; i < n; i++)
    {
        term = a + i * d;
        printf("%.2f ", 1.0 / term);
    }

    return 0;
}
*/
