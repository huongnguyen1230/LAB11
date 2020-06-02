#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[5], a, sum=0;
	int sum_arr(int num_arr[]);
	for (a = 0; a <5; a++)
	{
		printf ("enter number %d:", a+1);
		scanf ("%d", &num[a]);
	}
	sum = sum_arr(num);
	printf ("the suum of the array is %d", sum);
	getch();
}
	int sum_arr(int num_arr[])
	{
		int i, total;
		for (i=0, total =0; i<5; i++)
		total +=num_arr[i];
		return total;
	
}
