#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char name[5][30];
	int i, j, n;
	
	for (i=0; i<5; i++ )
	{
		printf ("enter string: ");
		scanf ("%s", name[i]);
	}
	printf ("\n");
	char title[10];
	printf ("enter title: ");
	scanf ("%s", title);
	
	printf("new name: \n");
	printf ("%s ", title);
	
	for (i=0; i<5; i++ )
	{
		printf ("%s ", name[i]);
	}
	
	return 0;
}

