#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person person;

    printf("Enter name: ");
    fgets(person.name, sizeof(person.name), stdin);

    printf("Enter age: ");
    scanf("%d", &person.age);

    printf("Name: %s", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}