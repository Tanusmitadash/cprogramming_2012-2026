This is a common **bit manipulation** program in C.

### Problem Statement

1. Read an integer `num`.
2. Read bit position `n`.
3. Read bit position `m`.
4. Check whether the **nᵗʰ bit** is **set (1)**.
5. If it is set, **clear the mᵗʰ bit**.
6. Print the result.

> **Assumption:** Bit positions start from **0** (LSB = bit 0).

---

## C Program

```c
#include <stdio.h>

int main()
{
    int num, n, m;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the nth bit: ");
    scanf("%d", &n);

    printf("Enter the mth bit: ");
    scanf("%d", &m);

    // Check nth bit
    if (num & (1 << n))
    {
        printf("The %dth bit is SET\n", n);

        // Clear mth bit
        num = num & ~(1 << m);

        printf("After clearing %dth bit, number = %d\n", m, num);
    }
    else
    {
        printf("The %dth bit is NOT SET\n", n);
    }

    return 0;
}
```

---

## Sample Output 1

```text
Enter the number: 29
Enter the nth bit: 3
Enter the mth bit: 2

The 3th bit is SET
After clearing 2th bit, number = 25
```

### Explanation

```text
29 = 11101₂

Bit Position:
4 3 2 1 0
1 1 1 0 1
```

* **3rd bit = 1** ✅
* Clear **2nd bit**

```text
Before : 11101
Mask   : 11011
----------------
After  : 11001
```

```text
11001₂ = 25
```

---

## Sample Output 2

```text
Enter the number: 20
Enter the nth bit: 0
Enter the mth bit: 2

The 0th bit is NOT SET
```

---

# Understanding the Logic

### 1. Checking the nth bit

```c
if (num & (1 << n))
```

Example:

```text
num = 29

Binary:
11101
```

Check the **3rd bit**:

```text
1 << 3

00001
<<3

01000
```

Now AND it with the number:

```text
11101
01000
-----
01000
```

Result is non-zero, so the bit is **set**.

---

### 2. Clearing the mth bit

Mask:

```c
~(1 << m)
```

Example: `m = 2`

```text
1 << 2

00100
```

Take NOT:

```text
11011
```

Now AND with the original number:

```text
11101
11011
-----
11001
```

The **2nd bit becomes 0**, while all other bits remain unchanged.

---

## Important Bitwise Operators

| Operator | Meaning     | Example             |
| -------- | ----------- | ------------------- |
| `&`      | Bitwise AND | Check or clear bits |
| `\|`     | Bitwise OR  | Set a bit           |
| `^`      | Bitwise XOR | Toggle a bit        |
| `~`      | Bitwise NOT | Invert all bits     |
| `<<`     | Left Shift  | Move bits left      |
| `>>`     | Right Shift | Move bits right     |

### Interview Tip

The most common bit manipulation operations are:

* **Check nth bit:** `num & (1 << n)`
* **Set nth bit:** `num | (1 << n)`
* **Clear nth bit:** `num & ~(1 << n)`
* **Toggle nth bit:** `num ^ (1 << n)`

These are frequently asked in C programming, embedded systems, and technical interviews.

