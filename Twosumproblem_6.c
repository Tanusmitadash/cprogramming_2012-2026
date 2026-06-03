/*For each number:
complement = target - current_number

Check if complement already exists in hash map.

Example:

Target = 9
Current = 7
Complement = 2

Since 2 already exists, pair found.*/
#include <stdio.h>

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;
//main logic
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
//Return Indices Instead of Values
#include <stdio.h>

int main() {

    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            if(arr[i] + arr[j] == target) {

                printf("Indices: [%d, %d]\n", i, j);
                return 0;
            }
        }
    }

    printf("No pair found");

    return 0;
}
