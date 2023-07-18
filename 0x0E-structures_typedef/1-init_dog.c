#include <stdio.h>
#include <stdlib.h>

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

#endif

/**
 * init_dog - A dog struct initializer
 * @d: A pointer to dog struct function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: A function that initialize
 * a variable of type struct dog
 *
 * Return: Always 0(Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
