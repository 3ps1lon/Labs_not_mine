#include <iostream>
#include <vector>
#include <cmath>

void Task_1() {
	std::vector<double> X;
	double y;
	std::cout << "Array 1: ";
	for (int i = 0; i < 8; i++) {

		y = (1.8 * (cos(2 * i - 3.7))) / (sqrt(abs(i - 1.6)));

		X.push_back(y);
		std::cout << X[i] << " ";
	}

	std::cout << "\n" << "Array 2: ";;

	double temp;
	double maax;
	maax = 0;
	temp = X[1];
	X[1] = X[6];
	X[6] = temp;

	for (int i = 0; i < 8; i++) {
		if (X[i] > 0) {
			maax += X[i];
		}
		std::cout << X[i] << " ";
	}
	std::cout << "\n" << "Sum positive numbers: " << maax;
}