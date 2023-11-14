#ifndef dog
#define dog
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct dog - frist struct
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
