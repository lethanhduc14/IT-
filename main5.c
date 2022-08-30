#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main () 
{
printf("The mumber 555.55 in various forms :\n");
printf("In float form without modifiers :\n");
printf("[%f]\n",555.55);
printf("In exponential form withot any modifier :");
printf("[%e]\n",555.55);
printf("In float form with- modifier:\n");
printf("[%-f]\n,555.55");
printf("In float frorm with digit string 10.3 as modifier\n");
printf("[%10.3f]\n",555.55);
printf("In float form with 0 as modifier :\n");
printf("[%-f]\n",555.55);
printf("In float form with digit string 10.3 asmodifier\n");
printf("[%10.3f\n]",555.55);
printf("In float form with 0 as modifier:\n");
printf("[%0f]\n",555.55);
printf("In float  form with 0 and digitstring 10.3");
printf("as modifiers :");
printf("[%10.3f]\n",555.55);
printf("In float form with -,0");
printf("and digit string 10.3 as modifiers:\n");
printf("[%-10.3f]\n",555.55);
printf("In exoinentinal form with 0");
printf("and digit string 10.3 as modifiers:\n");
printf("[%010.3e]\n",555.55);
printf("In exponential form with _,0");
printf(" and digit string 10.3 as modifiers :\n");
printf("[%-010.3e]\n\n",555.55);

	return 0;
}
