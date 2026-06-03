#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    int n = 6;

    printf("Duplicate elements are:\n");
//main logic
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}
/*
For the nested loop approach:
O(n2) Because each element is compared with every other element.
Using hashing/set methods can improve it to:
O(n) using extra memory.*/
