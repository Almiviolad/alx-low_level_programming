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
			printf("Name: %s", d->name);
		else
			printf("(nil)");
		if (d->age != 0)
			printf("Age: %.1f", d->age);
		else
			printf("(nil");
		if (d->owner != NULL)
			printf("Owner: %s", d->owner);
		else
			printf("(nil)");
	}
}
