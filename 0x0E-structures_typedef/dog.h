#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - A dog struct function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: A type of structure name struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
