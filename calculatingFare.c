//Program for calculating Fare
//ABDISAMAL ALI
//BCS-03-0001/2026

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance (km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh %.2f\n", calculateFare(distance));
    return 0;
}