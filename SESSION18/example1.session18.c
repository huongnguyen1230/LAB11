#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	char str_arr[5][20], str[20];
	
	for (i=0; i<5; i++)
	{
		printf ("enter string %d:", i+1);
		scanf("%s", str_arr[i]);
	}
	for (i=0; i<4; i++)
		for (j=i+1; j<5; j++)
		{
			if (strlen(str_arr[i]) < strlen(str_arr[j]))
			{
				strcpy(str, str_arr[i]);
				strcpy(str_arr[i], str_arr[j]);
				strcpy(str_arr[i],str);
			}
		}
	printf ("the strings in descending order of length are:\n");
	for (i=0; i<5; i++)
	printf ("%s\n", str_arr[i]);
	
	
getch();
}
