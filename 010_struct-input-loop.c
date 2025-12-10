#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person people[100]; // fixed size array

    int n;
    printf("How many people? ");
    scanf("%d", &n);

    // fill data
    for (int i = 0; i < n; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", people[i].name);
        printf("Enter age: ");
        scanf("%d", &people[i].age);
    }

    // display data
    printf("\nPeople info:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    return 0;
}