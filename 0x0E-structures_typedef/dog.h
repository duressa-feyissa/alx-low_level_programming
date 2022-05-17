#ifndef _DOG_
#define _DOG_

/**
 * struct dog - Define a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
