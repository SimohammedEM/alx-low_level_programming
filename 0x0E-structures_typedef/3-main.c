#include <stdio.h>
#include "dog.h"

/**
 * main - testing
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_d;

    my_d.name = "Poppy";
    my_d.age = 3.5;
    my_d.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_d.name, my_d.age);
    return (0);
}
