#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - contains data describing what makes a dog.
 * @name: the name of the dog
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 * Description: a structure with the name, age and owner of a dog.
*/

typedef struct dog
{
    char *name;
    float age;
    char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif
