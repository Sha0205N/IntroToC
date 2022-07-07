#include <stdio.h>

int main() {
	printf("%d\n", GetFibonacciVal(3));
	return 0;
}
int GetFibonacciVal(int index) {
	//index starts from 0
	int i = 0;
	int num1 = 0;
	int num2 = 1;
	int temp;
	while (i < index) {
		temp = num1;
		num1 += num2;
		num2 = temp;
		i++;
	}
	return num1;
}
int printEmpire(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		printf("Mamas %d Empire!\n", i);
	}
	return 0;
}