#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, Robotics!\n");
    printf("Student Name: %s\n", name);

    return 0;
}
