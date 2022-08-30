#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main () 
{
	printf(" A string in various foerms:\n");
	printf("Without any format command :\n");
	printf("Good day Mr. Lee. \n");
	printf(" With format command but without any modifier :\n");
	printf ("[%s]\n","Good day Mr. Lee.");
	printf(" With digit string 4 as modifier:");
	printf("[%4s]\n","Good day Mr. Lee.");
	printf("With digit string 23 as modifier : \n");
	printf("[%23s]\n","Good day mr. Lee.");
	printf("With digit string 25.4 as modfier; \n");
	printf("[%2.4s]\n","Good day Mr. Lee.");
	printf("With - and digit string 25.4 as modfier :\n");
	printf("[%-25.4s]\n","Good day Mr. Shroff.");
	
	return 0;
}
