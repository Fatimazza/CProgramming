#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[50];
};

int main()
{
    // Initialization #1 in compile time
    struct employee info = {1, "Fatima Zza"};

    // Initialization #2 in run time
    struct employee info2;
    strcpy(info2.name, "Fitimi Zzi");
    info2.id = 2;

    printf("Employee Name: %s\n", info.name);
    printf("Employee ID  : %04d\n", info.id); // Output: 0001

    printf("Employee Name: %s\n", info2.name);
    printf("Employee ID  : %04d\n", info2.id); // Output: 0002

    return 0;
}
