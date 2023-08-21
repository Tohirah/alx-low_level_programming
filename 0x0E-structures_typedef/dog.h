#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - god data type
* @name: name of dog
* @age: age of dog
* @owner: owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
