#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char first[255], last[255];

	printf("Enter your first name: ");
	fgest(first, 255, stdin);
	first[strlen(first)-1] = '\0';/* remove the newline atthe end */

	prinf("Now enter your last name: ");
	gets(last);/* buffer overflow? whats that? */

	printf("Hellо %s %s!\n", first, last);
	return 0;
}
