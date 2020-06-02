#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[15]="new york";
	char str2[15]="washington";
	char chr = 'n', *loc;
	
	loc = strchr(str1, chr);
	if ( loc!= NULL)
		printf("%c occurs in %s\n",chr,str1);
	else
		printf ("%c dose not occur in %s\n",chr,str1);
		
	loc = strchr(str2, chr);
	if ( loc!= NULL)
		printf("%c occurs in %s\n",chr,str2);
	else
		printf ("%c dose not occur in %s\n",chr,str2);
		
	return 0;
}
