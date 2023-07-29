#ifndef DOG_H
#define DOG_H

/**
 * struct dog - some information about the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner
 *
 * Description: No disciption
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *x, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *test, char *strc);
int _strlen(char *s);

#endif
