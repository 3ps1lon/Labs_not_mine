#include<iostream>
#include <fstream>
#include<vector>
#include<cmath>
#include<ctime>

void Task_2() {
	int random_number;
	double res;
	res = 1;
	std::vector<int> Y;

	srand(time(NULL));

	for (int i = 0; i < 5; i++) {
		random_number = 1 + rand() % 100;
		Y.push_back(random_number);
	}

	std::ofstream out;
	out.open("Test.txt");
	out << "Array: ";
	std::cout << "Array: ";
	for (int i = 0; i < 5; i++) {
		
		res *= (i + 3) / (abs(sin(Y[i])) + 2);
		

		std::cout<<Y[i] << " ";
		out << Y[i] << " ";
		
	}
	std::cout << "\n" << "Mult: " << res;

	
	out << "\nMult: " << res;
	out.close();

}