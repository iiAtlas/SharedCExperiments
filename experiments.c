#include <stdio.h>
#include <stdlib.h>

void atlas();
void wally();
void swapVars(int *v1, int *v2); //Swap values of v1 and v2

int main() {
	printf("Starting experimentation...\n\n");
	
	atlas();
	wally();

	printf("Completed experimentation.\n");
	exit(EXIT_SUCCESS);
}

void atlas() {
	printf("Executing Atlas' experiments...\n");

	int myV1 = 10, myV2 = 20;
	printf("myV1 = %d, myV2 = %d\n", myV1, myV2);
	swapVars(&myV1, &myV2);
	printf("myV1 = %d, myV2 = %d\n", myV1, myV2);

	printf("Completed Atlas' experiments.\n\n");
}

void swapVars(int *v1, int *v2) {
	int temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

void wally() {
	printf("Executing Wally's experiments...\n");
	
	//Signed & Unsigned Ints
	int usi; //Signed int usi
	unsigned int si; //Unsigned int si
	
	usi = -10;
	si = 5;
	
	(unsigned)si = si + usi;
	
	printf("Test One: %d\n", si);
	
	usi = -10;
	si = 5;
	
	if(usi < si) {
<<<<<<< HEAD
<<<<<<< HEAD
		printf("This shouldn't run... but it is late...");
		printf("Now it's day!");"
=======
		printf("This shouldn't run... but it is late...\n");
>>>>>>> int-testing
=======
		printf("This shouldn't run... but it is late...\n");
>>>>>>> int-testing
	}

	printf("Completed Wally's experiments.\n\n");
}
