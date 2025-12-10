#include <stdio.h>

struct employee
{
    int id;
    char name[50];
};

int main()
{
    // Initialization #1 in compile time
    struct employee info = {1, "Fatima Zza"};

    printf("Employee Name: %s\n", info.name);
    printf("Employee ID  : %04d\n", info.id); // Output: 0001

    return 0;
}
