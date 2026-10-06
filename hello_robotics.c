#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, Robotics!\n");
    printf("Student Name: %s\n", name);

    return 0;
}


#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, Robotics!\n");
    printf("Student Name: %s\n", name);

    return 0;
}#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, Robotics!\n");
    printf("Student Name: %s\n", name);

    return 0;
}

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, Robotics!\n");
    printf("Your age is %d\n", age);

    return 0;
}

#include <stdio.h>

int main() {
    int roll;

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Hello, Robotics!\n");
    printf("Roll Number: %d\n", roll);

    return 0;
}



#include <stdio.h>

int main() {
    int battery;

    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    printf("Hello, Robotics!\n");

    if (battery >= 20)
        printf("Robot battery is sufficient.\n");
    else
        printf("Warning: Low battery!\n");

    return 0;
}



#include <stdio.h>

int main() {
    float temperature;

    printf("Enter robot temperature: ");
    scanf("%f", &temperature);

    printf("Hello, Robotics!\n");

    if (temperature > 50)
        printf("Warning: High temperature!\n");
    else
        printf("Temperature is normal.\n");

    return 0;
}



#include <stdio.h>

int main() {
    float speed;

    printf("Enter robot speed: ");
    scanf("%f", &speed);

    printf("Hello, Robotics!\n");

    if (speed > 10)
        printf("Robot is moving fast.\n");
    else
        printf("Robot is moving slowly.\n");

    return 0;
}



#include <stdio.h>

int main() {
    float s1, s2;

    printf("Enter Sensor 1: ");
    scanf("%f", &s1);

    printf("Enter Sensor 2: ");
    scanf("%f", &s2);

    printf("Hello, Robotics!\n");
    printf("Total Sensor Value = %.2f\n", s1 + s2);

    return 0;
}