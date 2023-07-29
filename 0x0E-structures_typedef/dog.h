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
 * dog_type - typedef for the struct dog
 */
typedef struct dog dog_type;

void init_dog(struct dog *chien, char *name, float age, char *owner);
void print_dog(struct dog *chien);
dog_type *new_dog(char *name, float age, char *owner);
void free_dog(dog_type *chien);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
