#include <stdio.h>

int main(void){

	const int countdown = 10;
	int count = countdown;

	while(count >= 0){

		printf("%d\n", count);
		--count;
	}
	printf("BLAST OFF\n");

	return 0;	
}
