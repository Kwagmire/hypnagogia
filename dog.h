#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
