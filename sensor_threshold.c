#include <stdio.h>

int main() {
    float sensorValue;
    float threshold = 50.0;

    printf("Enter sensor value: ");
    scanf("%f", &sensorValue);

    if (sensorValue > threshold) {
        printf("Warning: Sensor value is above threshold!\n");
    } else {
        printf("Sensor value is within safe limit.\n");
    }

    return 0;
}
