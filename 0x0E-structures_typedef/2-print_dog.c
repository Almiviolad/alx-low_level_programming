#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*print_dog - a function that print dog info
*@d: dog structure
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)\n");
		if (d->age != 0)
			printf("Age: %.6f\n", d->age);
		else
			printf("(nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
