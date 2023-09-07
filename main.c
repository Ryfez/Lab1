#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgest(name, 255, stdin);
	printf("length = %d\n", strlen(name)); /* debug line */
	name[strlen(name)-1] = '\0'; /* remove the newline atthe end */

	printf("Hellо s!\n", name);
	return 0;
}
