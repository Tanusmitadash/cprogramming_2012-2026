
/*
```text
1   5
 2 4
  3
 2 4
1   5
```
*/
### C Program

```c
#include <stdio.h>

int main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == 5)
            {
                if (j == 1)
                    printf("1");
                else if (j == 5)
                    printf("5");
                else
                    printf(" ");
            }
            else if (i == 2 || i == 4)
            {
                if (j == 2)
                    printf("2");
                else if (j == 4)
                    printf("4");
                else
                    printf(" ");
            }
            else if (i == 3)
            {
                if (j == 3)
                    printf("3");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
```
/*
### Output

```text
1   5
 2 4
  3
 2 4
1   5
```

### Logic

* There are 5 rows and 5 columns.
* Use nested `for` loops:

  * Outer loop → Rows (`i`)
  * Inner loop → Columns (`j`)
* Print numbers only at these positions:

  * `(1,1)` → `1`
  * `(1,5)` → `5`
  * `(2,2)` → `2`
  * `(2,4)` → `4`
  * `(3,3)` → `3`
  * `(4,2)` → `2`
  * `(4,4)` → `4`
  * `(5,1)` → `1`
  * `(5,5)` → `5`
* Print a space everywhere else.

This is a common nested loop and pattern printing exercise in C.
*/
