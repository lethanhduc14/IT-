#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int a,b;
	printf("min= ");
	scanf("%d",&a);
	printf("max= ");
	scanf("%d",&b);
	for (a=a; a<=b; a +=5)
	printf("\n%d",a,b);
	return 0;
}
