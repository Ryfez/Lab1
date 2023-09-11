#include <stdio.h>
<<<<<<< HEAD
#include "askname.h"

int main(int argc, char **argv)
{
	char first[255], last[255];

	askname(first, stdin);

	printf("Hellо %s %s!\n", first, last);
=======
#include <string.h>

int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgest(name, 255, stdin);
	printf("length = %d\n", strlen(name)); /* debug line */
	name[strlen(name)-1] = '\0'; /* remove the newline atthe end */

	printf("Hellо s!\n", name);
>>>>>>> lastname
	return 0;
}
