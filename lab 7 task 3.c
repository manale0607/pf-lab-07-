#include <stdio.h>
int main() {
    int i, j, n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Repeated numbers are:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Number %d is repeated.\n", arr[i]);
                break; 
            }
        }
    }

    return 0;
}

