#include <stdio.h>

int main() {
	int studentrollnumber[11] = {1, 2, 6, 3, 4, 5, 6, 6, 7, 8, 9}; 
	int i, j;
	int size = 11;
	for (i = 0; i < size; i++) {	
	for (j = i + 1; j < size; j++)
			if (studentrollnumber[i] == studentrollnumber[j] ) 
			studentrollnumber[i] = 0;
			if (studentrollnumber[i] != 0) {
  	 		 printf("%d ", studentrollnumber[i]);
}

	}
return 0;
}

