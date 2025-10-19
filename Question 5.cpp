#include <stdio.h>

int main() {
    int n, i, j, budget;
    int found = 0;

    printf("Enter number of items in the store: ");
    scanf("%d", &n);

    int prices[n];

    for (i = 0; i < n; i++) {
        printf("Enter price of item %d: ", i + 1);
        scanf("%d", &prices[i]);
    }

    printf("Enter the customer's budget: ");
    scanf("%d", &budget);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (prices[i] + prices[j] == budget) {
                printf("\nThe two items that match the budget are: %d and %d\n", prices[i], prices[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("\nNo two items match the given budget.\n");
    }

    return 0;
}
