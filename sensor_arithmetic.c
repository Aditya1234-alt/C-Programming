#include <stdio.h>

int main() {
    float sensor1, sensor2;

    printf("Enter Sensor 1 value: ");
    scanf("%f", &sensor1);

    printf("Enter Sensor 2 value: ");
    scanf("%f", &sensor2);

    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition = %.2f\n", sensor1 + sensor2);
    printf("Subtraction = %.2f\n", sensor1 - sensor2);
    printf("Multiplication = %.2f\n", sensor1 * sensor2);

    if (sensor2 != 0)
        printf("Division = %.2f\n", sensor1 / sensor2);
    else
        printf("Division = Not possible (zero)\n");

    return 0;
}
