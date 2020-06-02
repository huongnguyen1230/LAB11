#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char lines[5][20];
	int a, longa=0;
	int longest(char lines_arr[][20]);
	
	for (a=0;a<5; a++)
	{
		printf ("enter string %d: ",a+1);
		scanf ("%s", lines[a]);
	}
	longa = longest(lines);
	printf ("the longest string is %s", lines[longa]);
	getch();
}
	int longest (char lines_arr[][20])
	{
		int i=0, l_a = 0, prev_len, new_len;
		prev_len = strlen(lines_arr[i]);
		for (i++; i<5; i++)
		{
			new_len = strlen(lines_arr[i]);
			if (new_len> prev_len) 
			l_a=i;
		 prev_len = new_len;
		}
		return l_a;
		
	}

