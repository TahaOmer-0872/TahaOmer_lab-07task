#include <stdio.h>

int main() {
    int n, i, j, defective;
    printf("Enter number of sold items: ");
    scanf("%d", &n);

    int items[n];

    for (i = 0; i < n; i++) {
        printf("Enter item code %d: ", i + 1);
        scanf("%d", &items[i]);
    }

    printf("Enter the defective item code to remove: ");
    scanf("%d", &defective);

    for (i = 0; i < n; i++) {
        if (items[i] == defective) {
            for (j = i; j < n - 1; j++) {
                items[j] = items[j + 1];
            }
            n--;
            i--;
        }
    }

    printf("\nUpdated list of item codes:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", items[i]);
    }

    return 0;
}
