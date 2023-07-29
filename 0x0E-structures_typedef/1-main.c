#include <stdio.h>
#include "dog.h"

/**
 * main - tester the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog the_dog;

    init_dog(&the_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", the_dog.name, the_dog.age);
    return (0);
}
