To find the **median of two unsorted arrays**, follow these steps:

1. Read both arrays.
2. Sort each array.
3. Find the median of each array.
4. Calculate the median of the two medians.

> **Note:** This approach matches many C programming lab exercises where the arrays are of equal size. It is **not** the same as finding the median of the combined arrays.

---

## C Program

```c
#include <stdio.h>

int main()
{
    int n1, n2, i, j, temp;
    float median1, median2, median;

    printf("Enter the size of Array1: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter the size of Array2: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    // Sort Array1
    for(i = 0; i < n1 - 1; i++)
    {
        for(j = i + 1; j < n1; j++)
        {
            if(arr1[i] > arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    // Sort Array2
    for(i = 0; i < n2 - 1; i++)
    {
        for(j = i + 1; j < n2; j++)
        {
            if(arr2[i] > arr2[j])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    // Median of Array1
    if(n1 % 2 == 0)
        median1 = (arr1[n1/2] + arr1[n1/2 - 1]) / 2.0;
    else
        median1 = arr1[n1/2];

    // Median of Array2
    if(n2 % 2 == 0)
        median2 = (arr2[n2/2] + arr2[n2/2 - 1]) / 2.0;
    else
        median2 = arr2[n2/2];

    // Median of two arrays
    median = (median1 + median2) / 2.0;

    printf("Median of Array1 = %.2f\n", median1);
    printf("Median of Array2 = %.2f\n", median2);
    printf("Median of both arrays = %.2f\n", median);

    return 0;
}
```

---

## Sample Output

```
Enter the size of Array1: 5
Enter 5 elements:
3 1 8 5 2

Enter the size of Array2: 5
Enter 5 elements:
9 6 7 4 10

Median of Array1 = 3.00
Median of Array2 = 7.00
Median of both arrays = 5.00
```

---

## Dry Run

### Array 1

Before sorting:

```
3 1 8 5 2
```

After sorting:

```
1 2 3 5 8
```

Median:

```
3
```

### Array 2

Before sorting:

```
9 6 7 4 10
```

After sorting:

```
4 6 7 9 10
```

Median:

```
7
```

Final median:

```
(3 + 7) / 2 = 5
```

---

### Time Complexity

* Sorting Array 1: **O(n₁²)** (using the simple sorting method shown)
* Sorting Array 2: **O(n₂²)**
* Finding medians: **O(1)**

Overall complexity: **O(n₁² + n₂²)**.

> **Note:** If your assignment instead asks for the **true median of all elements from both arrays combined**, the approach is different: merge the arrays, sort the combined array, and then find the median of the merged result.

