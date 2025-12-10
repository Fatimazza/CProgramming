#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[50];
    int age;
};

void removeNewline(char *str)
{
    str[strcspn(str, "\n")] = '\0';
}

int errorReadingInput(struct Person *people)
{
    fprintf(stderr, "Error reading input!\n");
    free(people);
    return 1;
}

int main()
{
    // struct Person people[100]; // fixed size array

    int n;

    printf("How many people? ");
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid number!\n");
        return 1;
    }
    getchar();

    // allocate memory for n people, after knowing n
    struct Person *people = (struct Person *)malloc(n * sizeof(struct Person));

    if (people == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // fill data
    for (int i = 0; i < n; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        if (fgets(people[i].name, sizeof(people[i].name), stdin) == NULL)
            return errorReadingInput(people);
        removeNewline(people[i].name);

        printf("Enter age: ");
        char bufAge[10];
        if (fgets(bufAge, sizeof(bufAge), stdin) == NULL)
            return errorReadingInput(people);
        removeNewline(bufAge);
        people[i].age = atoi(bufAge);
    }

    // display data
    printf("\nPeople info:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }

    // free memory
    free(people);

    return 0;
}