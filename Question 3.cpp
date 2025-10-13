#include <stdio.h>

int main() {
    int i;
    int size;
    
    printf("Enter amount of employee IDs: ");
    scanf("%d", &size);
    
    int employeeID[size];
    int even[size], odd[size]; 
    int evenCount = 0, oddCount = 0; 
    
    printf("Enter the employee IDs: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &employeeID[i]);
    }
    
    for (i = 0; i < size; i++) {
        if (employeeID[i] % 2 == 0) {
            even[evenCount++] = employeeID[i];  
        } else {
            odd[oddCount++] = employeeID[i];   
        }
    }
    
    printf("Even employee IDs: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    

    printf("Odd employee IDs: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
