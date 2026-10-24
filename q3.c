#include <stdio.h>

int main() {
    int arr[100], n, target;
    int found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n < 3 || n > 100) {
        printf("Invalid array size\n");
        return 0;
    }

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {

                if (arr[i] + arr[j] + arr[k] == target) {
                    printf("%d %d %d\n",
                           arr[i], arr[j], arr[k]);
                    found = 1;
                }

            }
        }
    }

    if (found == 0) {
        printf("No triplets found\n");
    }

    return 0;
}