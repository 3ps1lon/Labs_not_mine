#include <iostream>
#include <cmath>

int main() {
	//while
	double z;
	double x = 0.15;
	double y = 0.4;
	while (x <= 0.55) {

		while (y<=4)
		{
			z = std::max(cos(pow(x, 3) - sqrt(y)), pow(x * pow(y,2), 1. / 3));

			std::cout << "x = " << x << " y = " << y << "\nz = " << z << std::endl;
			y += 3;
		}
		y = 0.4;
		x += 0.4;
	}
	

	return 0;
}