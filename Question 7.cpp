#include <stdio.h>

int main() {
    int n1, n2, i, j;
    printf("Enter number of students in Section A: ");
    scanf("%d", &n1);
    int sectionA[n1];
    for (i = 0; i < n1; i++) {
        printf("Enter roll number %d for Section A: ", i + 1);
        scanf("%d", &sectionA[i]);
    }

    printf("Enter number of students in Section B: ");
    scanf("%d", &n2);
    int sectionB[n2];
    for (i = 0; i < n2; i++) {
        printf("Enter roll number %d for Section B: ", i + 1);
        scanf("%d", &sectionB[i]);
    }

    int combined[n1 + n2];
    for (i = 0; i < n1; i++) {
        combined[i] = sectionA[i];
    }
    for (j = 0; j < n2; j++) {
        combined[n1 + j] = sectionB[j];
    }

    printf("\nCombined roll number list:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", combined[i]);
    }

    return 0;
}
