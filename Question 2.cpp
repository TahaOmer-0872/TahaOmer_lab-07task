#include <stdio.h>

int main() {
    int i;
    int studentmarks[10];
    printf("Enter the 10 student marks: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &studentmarks[i]);
    }
    int max = studentmarks[0];
    for (i = 1; i < 10; i++) {
        if (studentmarks[i] > max) {
            max = studentmarks[i];
        }
    }
    printf("The maximum mark is: %d\n", max);
    
    return 0;
}
