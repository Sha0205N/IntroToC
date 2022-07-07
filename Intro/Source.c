#include <stdio.h>
#include <math.h>
#include "point.c"
#include "rectangle.c"

int printEmpire(int num) {
	int i;
	for (i = 1; i <= num; i++) {
		printf("Mamas %d Empire!\n", i);
	}
	return 0;
}

int getFibonacciVal(int index) {
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

point getFurtherPoint(point p1, point p2) {
	int distance1 = pow(p1.x, p1.x) * pow(p1.y, p1.y);
	int distance2 = pow(p2.x, p2.x) * pow(p2.y, p2.y);
	if (distance1 > distance2) {
		return p1;
	}
	else {
		return p2;
	}
}
int getRectangleArea(rectangle r) {

}

int main() {
	point p1;
	p1.x = 1;
	p1.y = 1;
	point p2;
	p2.x = 1;
	p2.y = 2;
	point p = getFurtherPoint(p1, p2);
	printf("%d\n", p.x);
	printf("%d\n", p.y);
	return 0;
}