#include <iostream>
#include <cmath>

int main() {
	//while,for,do while
	double y;

	for (double x = 0; x <= 0.4; x += 0.08) {
		y = exp(2*x)+acos(2*x+0.1);
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
	}

	return 0;
}