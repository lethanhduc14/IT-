#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	printf("The number 555 in various forms:\n");
	printf("Without any modifiel:\n");
	printf("[%d]\n",555);
	printf("[%-d]/n",555);
	printf("With 0 as modifier:\n");
	printf("[%0d]\n",555);
	printf("With 0 and digit string 10as modifiers:\n"); 
	printf("[5010d]",555);
	printf("With -, 0 and digit string 10 as modifiers:\n");
	printf("In float form with - modifier:\n");
	printf("[%-010d]\n",555);
	
	return 0;
}
