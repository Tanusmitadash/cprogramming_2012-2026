#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = 7;
    int visit[7] = {0};

    for(int i = 0; i < n; i++) {

        if(visit[i] == 1)
            continue;

        int count = 1;
/*Nested loops are used:O(n2)*/
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visit[j] = 1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}

/*Each element is compared with remaining elements.

Time Complexity:
O(n2)
Space Complexity:
O(n):because of the visited[] array.*/
