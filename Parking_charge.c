#include <stdio.h>
int main() {
    int n, i, type, hours;
    float charge, total = 0;
    // Ask total number of vehicles
    printf("Enter number of vehicles: ");
    scanf("%d", &n);
    // For loop for multiple vehicles
    for(i = 1; i <= n; i++) {
        printf("\nVehicle %d\n", i);
        printf("Enter vehicle type (1-Bike, 2-Car): ");
        scanf("%d", &type);
        printf("Enter hours parked: ");
        scanf("%d", &hours);
        // Nested IF for vehicle type
        if(type == 1) {   // Bike
            charge = hours * 20;
            // Extra fine if parked more than 5 hours
            if(hours > 5) {
                charge = charge + 50;
            }
        }
        else if(type == 2) {   // Car
            charge = hours * 40;
            // Extra fine if parked more than 5 hours
            if(hours > 5) {
                charge = charge + 100;
            }
        }
        else {
            printf("Invalid vehicle type!\n");
            continue;
        }
        printf("Parking Charge = %.2f\n", charge);
        total = total + charge;
    }
    printf("\nTotal Collection Today = %.2f\n", total);
    return 0;
}