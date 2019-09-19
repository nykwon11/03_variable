#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	char y;
	short z;
	float w;
	double k;
	
	printf("bytes of int : %d\n", sizeof(x));
	printf("bytes of char : %d\n", sizeof(y));
	printf("bytes of short : %d\n", sizeof(z));
	printf("bytes of float : %d\n", sizeof(w));
	printf("bytes of double : %d\n", sizeof(k));
	
	return 0;
}
