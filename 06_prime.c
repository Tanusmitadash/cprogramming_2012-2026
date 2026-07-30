/*
The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers up to a given number `N`.

### Algorithm

1. Create an array `prime[]` of size `N+1` and initialize all elements as `1` (true).
2. Mark `0` and `1` as not prime.
3. Start from `2`.
4. For each prime number `i`, mark all its multiples as non-prime.
5. Print all numbers that remain marked as prime.

---

### C Program

```c
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int prime[n + 1];

    // Initialize all numbers as prime
    for (i = 0; i <= n; i++)
    {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    // Sieve of Eratosthenes
    for (i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
```

---

### Sample Output

```text
Enter the value of n: 30
Prime numbers from 1 to 30 are:
2 3 5 7 11 13 17 19 23 29
```

---

### Dry Run (`n = 20`)

Initially:

```text
2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
```

* Start with `2` → Mark multiples:

```text
4 6 8 10 12 14 16 18 20
```

* Next prime is `3` → Mark multiples:

```text
9 12 15 18
```

* Next prime is `5`:

```text
25 > 20 → Stop
```

Remaining primes:

```text
2 3 5 7 11 13 17 19
```

---

### Time Complexity

* **Time:** `O(n log log n)` (much faster than checking each number individually)
* **Space:** `O(n)`

This algorithm is widely used because it efficiently generates all prime numbers up to a limit.

*/
