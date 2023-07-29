#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog The_dog;

    The_dog.name = "Poppy";
    The_dog.age = 3.5;
    The_dog.owner = "Bob";
    print_dog(The_dog);
    return (0);
}
