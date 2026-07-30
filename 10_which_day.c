The logic is:

1. Validate `n` (must be between **1 and 365**).
2. Validate the starting day (must be between **1 and 7**).
3. Find the day using:

```text
day = (start_day + n - 1) % 7
```

If the remainder is `0`, treat it as `7` (Saturday).

### C Program

```c
#include <stdio.h>

int main()
{
    int n, start_day, day;

    printf("Enter the value of 'n' : ");
    scanf("%d", &n);

    if (n <= 0 || n > 365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
        return 0;
    }

    printf("Choose First Day :\n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");

    printf("Enter the option to set the first day : ");
    scanf("%d", &start_day);

    if (start_day <= 0 || start_day > 7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        return 0;
    }

    day = (start_day + n - 1) % 7;

    if (day == 0)
        day = 7;

    switch (day)
    {
        case 1:
            printf("The day is Sunday\n");
            break;
        case 2:
            printf("The day is Monday\n");
            break;
        case 3:
            printf("The day is Tuesday\n");
            break;
        case 4:
            printf("The day is Wednesday\n");
            break;
        case 5:
            printf("The day is Thursday\n");
            break;
        case 6:
            printf("The day is Friday\n");
            break;
        case 7:
            printf("The day is Saturday\n");
            break;
    }

    return 0;
}
```

### Dry Run

**Input:**

```text
n = 9
start_day = 2 (Monday)
```

Calculation:

```text
day = (2 + 9 - 1) % 7
    = 10 % 7
    = 3
```

`3` corresponds to **Tuesday**.

Output:

```text
The day is Tuesday
```

---

**Input:**

```text
n = 9
start_day = 3 (Tuesday)
```

Calculation:

```text
day = (3 + 9 - 1) % 7
    = 11 % 7
    = 4
```

Output:

```text
The day is Wednesday
```

This solution satisfies all the sample test cases and demonstrates the use of **arithmetic operators** and a **`switch` statement**, as required.

