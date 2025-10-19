#include <stdio.h>

int main() {
    int arr[10] = {12, 45, 7, 89, 23, 45, 67, 90, 11, 56};
    int i, search;

    printf("List of numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (arr[i] == search) {
            printf("Number found at index %d\n", i);
            return 0;
        }
    }

    printf("Number not found in the list.\n");
    return 0;
}
