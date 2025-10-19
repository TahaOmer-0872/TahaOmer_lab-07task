#include<stdio.h>
int main() {
	int frequency, i, j, amountofIDs, maxfrequency = 0, mostfrequent;
	printf("How many product IDs do you want to enter: ");
	scanf("%d", &amountofIDs);
	int product_ID[amountofIDs];
	for(i = 0; i < amountofIDs; i++) {
		printf("Enter product ID %d: ", i + 1);
	scanf("%d", &product_ID[i]);
	}
	for(j = 0; j< amountofIDs; j++) {
	frequency = 0;
	for(i = 0; i < amountofIDs; i++) {
	if(product_ID[j] == product_ID[i]) {
	frequency++;
		}
	}
	if (frequency > maxfrequency) {
		maxfrequency = frequency;
		mostfrequent = product_ID[j];
	}
	}
	printf("\n the most frequent product is %d", mostfrequent);
	return 0;
}
