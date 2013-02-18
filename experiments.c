#include <stdio.h>

void atlas();
void wally();

void swapVars(int *v1, int *v2); //Swap values of v1 and v2

int main() {
	printf("Starting experimentation...\n\n");
	
	atlas();
	wally();

	printf("Completed experimentation.\n");
	return 0;
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
	
	struct trial {
		char first_name;
		char last_name;
		int age;
	};
	
	struct trial t;
	
	t.first_name = "Wally";
	t.last_name = "Mclallen";
	t.age = 16;
	
	printf("%c %c %d", t.first_name, t.last_name, t.age);

	printf("Completed Wally's experiments.\n\n");
}
