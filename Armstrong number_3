#include <stdio.h>
#include <math.h>

int main()
{
// declare variables
    int num, oNum, rem, digit = 0;
    int res = 0;
// input and store data
    printf("Enter a number: ");
    scanf("%d", &num);

    oNum = num;

    int temp = num;

    // Count digits
    while(temp != 0)
    {
        temp /= 10;
        digit++;
    }

    temp = num;

    // Calculate Armstrong sum
    while(temp != 0)
    {
        rem = temp % 10;
        res+= pow(rem, digit);
        temp /= 10;
    }

    if(res == oNum)
        printf("%d is an Armstrong Number", oNum);
    else
        printf("%d is not an Armstrong Number", oNum);

    return 0;
}

