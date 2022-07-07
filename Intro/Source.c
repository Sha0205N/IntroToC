#include <stdio.h>
#include <math.h>
#include <stdbool.h>
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
	return r.height * r.width;
}

rectangle getLargerRectangle(rectangle r1, rectangle r2) {
	int area1 = getRectangleArea(r1);
	int area2 = getRectangleArea(r2);
	if (area1 > area2) {
		return r1;
	}
	else {
		return r2;
	}
}

bool canBeContained(rectangle r1, rectangle r2) {
	return r1.height < r2.height&& r1.width < r2.width;
}
int main() {
	rectangle r1;
	r1.height = 1;
	r1.width = 1;
	rectangle r2;
	r2.height = 2;
	r2.width = 2;
	rectangle r = getLargerRectangle(r1, r2);
	printf("%d\n", r.height);
	printf("%d\n", r.width);
	if(canBeContained(r1, r2))
		printf("true");
}