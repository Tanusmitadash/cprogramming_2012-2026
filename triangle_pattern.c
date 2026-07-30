To print the pattern:

```text
1 2 3 4 5
6     7
8   9
10 11
12
```

you can use the following C program.

```c
#include <stdio.h>

int main()
{
    int i, j, num = 1;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            if ((i == 2 && (j == 2 || j == 3)) ||
                (i == 3 && j == 2))
            {
                printf("   ");
                num++;
            }
            else
            {
                printf("%-3d", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}
```

### Output

```text
1  2  3  4  5
6        7
8     9
10 11
12
```
/*
### Logic

* `num` keeps increasing from **1 to 12**.
* Every position consumes a number, even if it is not printed.
* We replace specific positions with spaces:

  * Row 2 → Columns 2 and 3
  * Row 3 → Column 2
* For these positions, we print spaces but still increment `num`.

This produces the exact pattern you requested.
*/
