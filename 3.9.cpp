#include <stdio.h>

struct Owner {
    char name[30];
};

struct Car {
    char make[30];
    int year;
    struct Owner owner; 
};

int main() {
    struct Car c;

    printf("Enter car make: ");
    scanf("%s", c.make);

    printf("Enter year: ");
    scanf("%d", &c.year);

    printf("Enter owner name: ");
    scanf("%s", c.owner.name);

    printf("\nCar: %s\nYear: %d\nOwner: %s", c.make, c.year, c.owner.name);

    return 0;
}
