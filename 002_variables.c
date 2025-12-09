#include <stdio.h>

int main()
{
    // Declaring variables
    char name[] = "Fatima Zza";
    int age = 17;
    float gpa = 3.75;
    char grade = 'A';
    double pi = 3.141592653589793;

    // Printing variable values
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa); // Format to 2 decimal places
    printf("Grade: %c\n", grade);

    printf("\n");
    printf("Pi: %lf\n", pi);   // Print Double in Long Float format (6 digit)
    printf("Pi: %.15f\n", pi); // Print Double in Max. Double precision (15 digit)

    return 0;
}