#include <stdio.h>

int main(void){
	int x = 10;
	printf("DEBUG: x = %d\n", x);

	x = x * 2;
	printf("DEBUG: x after multiplication = %d\n", x);

	return 0;
}
