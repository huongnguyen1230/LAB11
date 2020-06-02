#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void nhietdo_MIN_MAX(int arg[5]) {
	int max = 0;
	int min = arg[0]; // min = 20
	int k;
	
	for(k = 0; k < 5; k++) {
		int cell = arg[k];
		
		if (cell > max) {
			max = cell;
		}
		
		if (cell < min) {
			min = cell;
		}
	}
	
	printf("Nhiet do MAX = %d \n", max);
	printf("Nhiet do MIN = %d  \n\n", min);
}


int main()
{
	//Khai bao
	int temp[5][5];
	
	
	//Nhap vao nhiet do hang nam, cho moi thanh pho
	printf("\nNhap vao so nhiet do C\n");
	
	int i, k;
	for(i = 0; i < 5; i++)
	{
		for(k = 0; k < 5; k++)
		{
			//args[i] = 0;
			printf("Thanh pho thu %d,nam thu %d: ", i + 1, k + 1);
			scanf("%d", &temp[i][k]);
		}
		//max[i] = min[i] = temp[i][0];
		printf ("\n");
	}
	
	//Xu ly 1: Tim & hien thi nhiet do MAX / MIN cho moi thanh pho
	for(i = 0; i < 5; i++) { //lap qua moi thanh pho
		printf("> Nam thu %d: \n", i + 1);
		nhietdo_MIN_MAX(temp[i]);
	}
	


	return 0;
}
