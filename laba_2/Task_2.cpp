#include <iostream>
#include <cmath>

int main() {
	// for
	double z,sum,min;
	sum = 0;
	min = 10000000;

	for (double x = 1.2; x <= 2.8; x += 0.7) {
		for (double y = 0.3; y <= 0.75; y += 0.45) {
			if (abs(x * x + y * y) <= 2) {
				z = cos(x + y) / sin(x + y);
				sum += z;
				if (z < min) {
					min = z;
				}
				std::cout << "x = " << x << " y = " << y << "\nz = " << z << std::endl;
			}
			else if (abs(x * x + y * y) < 5) {
				z = x * x + y * y * y;
				sum += z;
				if (z < min) {
					min = z;
				}
				std::cout << "x = " << x << " y = " << y << "\nz = " << z << std::endl;
			}
			else if (abs(x * x + y * y) >= 5) {
				z = x - y;
				sum += z;
				if (z < min) {
					min = z;
				}
				std::cout << "x = " << x << " y = " << y << "\nz = " << z << std::endl;
			}
		}
	}
	std::cout << "sum = " << sum << std::endl;
	std::cout << "min = " << min << std::endl;
	return 0;
}