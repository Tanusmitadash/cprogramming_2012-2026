The goal is to:

1. Read an integer.
2. Count the number of **set bits (1s)** in its binary representation.
3. Print whether the parity is **Even** or **Odd**.

   * **Even parity** → Number of set bits is even.
   * **Odd parity** → Number of set bits is odd.

### C Program

```c
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }

    printf("Number of set bits = %d\n", count);

    if (count % 2 == 0)
        printf("Even Parity\n");
    else
        printf("Odd Parity\n");

    return 0;
}
```

---

## Sample Output 1

```text
Enter a number: 7
Number of set bits = 3
Odd Parity
```

### Explanation

```text
7 = 111₂

Bit 1 → 1 (count = 1)
Bit 2 → 1 (count = 2)
Bit 3 → 1 (count = 3)

Total set bits = 3
Parity = Odd
```

---

## Sample Output 2

```text
Enter a number: 10
Number of set bits = 2
Even Parity
```

### Explanation

```text
10 = 1010₂

Set bits = 2

Parity = Even
```

---

## How the Logic Works

### Step 1: Check the last bit

```c
if (num & 1)
```

* If the last bit is `1`, increment the count.
* `&` is the **bitwise AND** operator.

Example:

```text
num = 13

Binary: 1101

1101
0001
----
0001   → Last bit is 1
```

---

### Step 2: Right Shift

```c
num = num >> 1;
```

Removes the last bit.

Example:

```text
1101 >> 1 = 0110
0110 >> 1 = 0011
0011 >> 1 = 0001
0001 >> 1 = 0000
```

Repeat until the number becomes `0`.

---

## Dry Run (num = 13)

| num (Binary) | `num & 1` | Count |
| ------------ | --------- | ----: |
| 1101         | 1         |     1 |
| 0110         | 0         |     1 |
| 0011         | 1         |     2 |
| 0001         | 1         |     3 |
| 0000         | Stop      |     3 |

Output:

```text
Number of set bits = 3
Odd Parity
```

---

### Time Complexity

* **Time:** `O(number of bits)` (for a 32-bit integer, at most 32 iterations)
* **Space:** `O(1)`

This approach uses **bitwise operators (`&` and `>>`)**, making it efficient and commonly asked in embedded systems and C programming interviews.

