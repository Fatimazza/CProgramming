#include <stdio.h>

int main()
{
    int num;
    char str[100];
    char fullStr[100];

    printf("Input a number: ");
    scanf("%d", &num); // Read an integer from user input

    printf("Input a String without space: ");
    scanf("%s", str); // Read a string from user input

    getchar(); // Clear the newline character from the input buffer
    printf("Input a String: ");
    fgets(fullStr, sizeof(fullStr), stdin); // Read a full string from user input

    printf("You entered: %d\n", num); // Print the entered number
    printf("You typed: %s\n", str);   // Print the entered string without space
    printf("You typed: %s", fullStr); // Print the entered string with space

    return 0;
}