#include <stdio.h>

int main() {
	printEmpire(53);
	return 0;
}
int printEmpire(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		printf("Mamas %d Empire!\n", i);
	}
	return 0;
}