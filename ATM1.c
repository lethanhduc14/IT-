#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
int x;
	x = 0;
	printf("\nEnter Choice (1-4):");
	scanf("%d",&x);
if (x==1)
{
	   printf("\nRut Tien ");
	   char ch;
	   printf("\nEnter choice (1-2):");
	   fflush(stdin);
	   scanf("%c",&ch); 
	   
   if (ch<=2 || ch>=1)
	 
   
	switch (ch)
	{    case'1':
	       printf("\nNhap so tien can rut");
	     break;
	     case '2':
	        printf("\nHuy giao dich");
	     break;

	}
}

	
	else if (x==2)
	{
	
	printf("\nChuyen khoan");
	char ch;
	printf("\nEnter choice (1-2)");
	fflush(stdin);
	scanf("%c",&ch);
	if (ch<2 || ch>1)
	  switch (ch)
	{
		   case '1':
	    	printf("\nnhap so tien can chuyen khoan :");
	    	break;
	    case '2':
	    	printf("\nHUY");
	    	break;
	    }}
	
	else if (x==3)
	{
	
	printf("\nXem so du");
	char ch;
	printf("\nEnter choice (1-2)");
	fflush(stdin);
	scanf("%c",&ch);
	if (ch<2 || ch>1)
	switch (ch)
	{ 
	   case'1':
	   	printf("\nHien thi so du ...");
	   	break;
	   	case '2':
	   		printf("\nHUY");
	   		
	   	break;
	   	}
	   }
	else if (x==4)
	printf("\nKet thuc");
	printf("\nThanhs");
	
	
}
