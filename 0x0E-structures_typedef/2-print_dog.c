#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
if (d == NULL) /* check if d is valid */
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age); /* print age */
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
