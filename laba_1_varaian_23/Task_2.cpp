#include <iostream>
#include <cmath>

double zfuc(double x, double y) {

	double z;

	if ((x + 0.5 * y) <= 1) {
		z = x / (pow(sin(y), 2));
	}
	else if ((1 < x + 0.5 * y) and (5 > x + 0.5 * y)) {
		z = exp(x) + exp(y);
	}
	else if (x + 0.5 * y >= 5) {
		z = log(3 * (x + y))+2.12;
	}
	return z;
}



int main() {

	std::cout << "z1 = " << zfuc(0.5, 1) << std::endl;
	std::cout << "z2 = " << zfuc(0.7, 2) << std::endl;
	std::cout << "z3 = " << zfuc(3, 6) << std::endl;
	return 0;
}