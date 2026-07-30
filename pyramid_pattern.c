To print the following pattern:

```text
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
```

use this C program:

```c
#include <stdio.h>

int main()
{
    int i, j, k;
    int n = 5;

    // Upper half
    for (i = n; i >= 1; i--)
    {
        // Print leading spaces
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }

        // Print numbers
        for (k = i; k <= n; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    // Lower half
    for (i = 2; i <= n; i++)
    {
        // Print leading spaces
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }

        // Print numbers
        for (k = i; k <= n; k++)
        {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
```

### Logic

* The pattern has **9 rows** (`2 × n - 1`).
* The **upper half** prints from `5` down to `1`.
* The **lower half** prints from `2` back to `5`.
* For each row:

  * Print `(i - 1)` leading spaces (using `"  "` for alignment).
  * Print numbers from `i` to `n`.

This is a common **diamond number pattern** using nested `for` loops.

