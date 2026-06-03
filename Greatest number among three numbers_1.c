/*Find the greatest number among three numbers.*/
input - 10,25,15
output- 25
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        printf("%d is the largest", a);
    }
    else if(b >= a && b >= c)
    {
        printf("%d is the largest", b);
    }
    else
    {
        printf("%d is the largest", c);
    }

    return 0;
}
/* ternary operator*/

largest = (a > b) ? ((a > c) ? a : c) :((b > c) ? b : c);

/* python */
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

if a >= b and a >= c:
    print(a, "is the largest")
elif b >= a and b >= c:
    print(b, "is the largest")
else:
    print(c, "is the largest")

/* using max  function */
  largest = max(a, b, c)

print("Largest =", largest)  

/*
 Why complexity is O(1)?

Because number of comparisons is fixed.

It does not depend on input size.

What if numbers are equal?

Program still works correctly because:

>= used instead of >
The solution already uses constant comparisons,
so O(1) is optimal.
*/
