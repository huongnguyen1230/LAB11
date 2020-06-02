#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name [ 20];
	
	printf (" enter your name:");
	scanf ("%s", name);
	printf ("hi there : %s", name);
	return 0;
}
