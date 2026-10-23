#include <stdio.h>

int main() {
    int arr[8], i, j;

    printf("Enter 8 elements of the array:\n");

    for (i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            int x = arr[i] + arr[j];

            if (x == 11) {
                printf("The elements are %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}