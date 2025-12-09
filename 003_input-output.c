#include <stdio.h>

int main()
{
    int num;
    char str[100];

    printf("Input a number: ");
    scanf("%d", &num); // Read an integer from user input

    printf("Input a String: ");
    scanf("%s", str); // Read a string from user input

    printf("You entered: %d\n", num); // Print the entered number
    printf("You typed: %s\n", str);   // Print the entered string
}