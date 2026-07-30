A **prime number** is a number greater than 1 that has **exactly two factors**: **1** and **itself**.

Examples:

* **2, 3, 5, 7, 11, 13** → Prime numbers
* **4, 6, 8, 9, 10** → Not prime

---

## C Program to Check Whether a Number is Prime or Not

```c
#include <stdio.h>

int main()
{
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
```

---

## Sample Output 1

```text
Enter a number: 17
17 is a Prime number.
```

---

## Sample Output 2

```text
Enter a number: 18
18 is not a Prime number.
```

---

## Dry Run (Input: 17)

* `num = 17`
* Loop checks divisibility from `2` to `8` (`17 / 2`).

| i | 17 % i | Divisible? |
| - | ------ | ---------- |
| 2 | 1      | No         |
| 3 | 2      | No         |
| 4 | 1      | No         |
| 5 | 2      | No         |
| 6 | 5      | No         |
| 7 | 3      | No         |
| 8 | 1      | No         |

No divisor is found, so `flag` remains `1`.

**Output:**

```text
17 is a Prime number.
```

---

## Dry Run (Input: 18)

* `num = 18`

| i | 18 % i | Divisible? |
| - | ------ | ---------- |
| 2 | 0      | Yes        |

The loop stops immediately because `18` is divisible by `2`.

**Output:**

```text
18 is not a Prime number.
```

---

## Optimized Version (Recommended for Interviews)

Instead of checking up to `num / 2`, check only up to `√num`:

```c
#include <stdio.h>

int main()
{
    int num, i, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
```

### Time Complexity

* Basic approach (`i <= num / 2`): **O(n)**
* Optimized approach (`i * i <= num`): **O(√n)** (preferred in coding interviews and embedded programming).

