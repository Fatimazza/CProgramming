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

int main()
{
    // struct Person people[100]; // fixed size array

    int n;
    // allocate memory for n people
    struct Person *people = (struct Person *)malloc(n * sizeof(struct Person));

    printf("How many people? ");
    scanf("%d", &n);
    getchar();

    // fill data
    for (int i = 0; i < n; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        fgets(people[i].name, sizeof(people[i].name), stdin);
        removeNewline(people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);
        getchar();
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