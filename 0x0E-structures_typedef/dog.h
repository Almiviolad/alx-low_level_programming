#ifndef DOG_H
#define DOG_H
/**
*struct dog - contains dog info
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Description: a structure containing information about a dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
