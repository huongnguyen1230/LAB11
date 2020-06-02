#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[15];
	char str2[15];
	printf ("enter str1: ");
	scanf("%s", str1);
	printf ("enter str2: ");
	scanf("%s", str2);
	char *c;
	
      c = strstr(str2, str1);

   
      if (c != NULL) {
     	printf("Chuoi 1 co xuat hien chuoi 2.");
        } 
    
      else {
	  	printf("Chuoi 1 khong xuat hien o chuoi 2.");
        }
   
    
	return 0;
}
