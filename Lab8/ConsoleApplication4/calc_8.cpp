#include"calc_8.h"
#define _USE_MATH_DEFINES
#include "cmath"

double calc_a(double x, double c) {
	return (cos(2 * ((c - 90) * M_PI / 180) + pow(3 * x / 4, 2) - sqrt(2 * x)));
}
double calc_b(double x, double y) {
	return (pow(pow(y, 3) - x, 2) / pow(y - x, 3) + pow(abs(y - x), 3) / pow(x, 1 / 5.0));
}
double calc_c(int A, double B)
{
	return sqrt(A * B);
}