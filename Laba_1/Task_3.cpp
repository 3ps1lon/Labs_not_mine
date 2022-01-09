#include <iostream>
#include <cmath>

double ufuc(double x, double y) {
	double u;

	if (x+y>=2) {
		u = std::max(sqrt(pow(x + 5.7, 4) + 2), 
			log10(abs(x)) / (5 * x));
	}

	else if (x+y<2) {
		u = tan(abs(y - 4) / (3 * x * x));
	}

	return u;
}




int main(){

	std::cout << "u1 = " << ufuc(1, 2) << std::endl;
	std::cout << "u2 = " << ufuc(1, 0.5) << std::endl;

	return 0;
}