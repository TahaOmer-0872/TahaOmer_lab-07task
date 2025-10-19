#include <stdio.h>

int main() {
    int seats[10] = {0};
    int seatNumber, bookings = 0;

    while (bookings < 5) {
        printf("Enter seat number (0-9): ");
        scanf("%d", &seatNumber);

        if (seatNumber < 0 || seatNumber > 9) {
            printf("Invalid seat number. Please enter between 0 and 9.\n");
            continue;
        }

        if (seats[seatNumber] == 0) {
            seats[seatNumber] = 1;
            bookings++;
            printf("Seat %d booked successfully!\n", seatNumber);
        } else {
            printf("Seat already booked.\n");
        }
    }

    printf("\nFinal seat status (0 = empty, 1 = booked):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", seats[i]);
    }

    return 0;
}
