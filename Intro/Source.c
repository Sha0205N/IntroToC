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
	int i = 1;
	int num1 = 1;
	int num2 = 0;
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

int getFibonacciIndex(int number) {
	//index starts from 0
	int i = 1;
	int num1 = 1;
	int num2 = 0;
	int temp;
	while (num1 < number) {
		temp = num1;
		num1 += num2;
		num2 = temp;
		i++;
	}
	if (num1 == number) {
		return i;
	}
	else {
		return -1;
	}
}

int getSqrt(int num) {
	return floor(sqrt(num));
}

int main() {
	printf("%d\n", getSqrt(3));
}