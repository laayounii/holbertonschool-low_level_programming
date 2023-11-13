#ifndef __STRUCT__
#define __STRUCT__
#include <stdio.h>
#include <string.h>
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
	void init_dog(struct dog *d, char *name, float age, char *owner);
};
#endif