#ifndef chien
#define chien

/**
 * struct dog - des informations basique sur un chien
 * @owner: le propriétaire du chien
 * @name: le nom du chien
 * @age: l'age du chien
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;

};

/**
 * Type_Dog - typedefinition de la structure struct dog
 */
typedef struct dog Type_Dog;

void initial_chien(struct dog *chien, char *name, float age, char *owner);
void printing_chien(struct dog *chien);
Type_Dog *Nouveau_chien(char *name, float age, char *owner);
void un_chien(Type_Dog *chien);
char *_strdog(char *dst, char *srsc);
int _strlendog(char *h);

#endif
