#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    int emp[n];
    for (i = 0; i < n; i++) {
        printf("Enter employee ID %d: ", i + 1);
        scanf("%d", &emp[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;

    int rotated[n];
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = emp[i];
    }

    printf("\nNew shift order after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}

