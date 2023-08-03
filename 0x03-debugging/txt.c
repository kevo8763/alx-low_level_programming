#include <stdio.h>

int main() {
	int a = 972;
	int b = -98;
	int c = 0;
	int largest;

	if (a > b && a > c) {
		largest = a;
	} else if (b > a && b > c) {
		largest = b;
	} else {
		largest = c;
	}

	printf("%d is the largest number\n", largest);
	return 0;
}

