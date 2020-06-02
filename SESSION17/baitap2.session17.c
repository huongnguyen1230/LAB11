#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	float average(int array[],int length)
	{
		int i; 
		int sum = 0;																	
		for (i=0; i< length; i++)
		{
			sum+= array[i];
		}
		return (float )sum/length;
	}
	
	
int main(int argc, char *argv[]) {

	int length;
	printf ("enter length: \n");	
	scanf ("%d", &length);
	
	int array[length];
		int x; 
		for (x=0; x<length; x++)
		
		{
			printf("enter value ary[%d]: \n", x);
			scanf ("%d", &array[x]);	
		}
		
	float calculateAverage = average(array, length);
	
		printf (" the average of array is %f \n", calculateAverage );	
	
	return 0;
}
