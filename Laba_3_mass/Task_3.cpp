#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

void create_file() {
	int A[4][4];
	int random_number;
	srand(time(NULL));

	std::fstream out;
	out.open("Task_3.txt");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			random_number = 1 + rand() % 100;
			A[i][j] = random_number;

			out << random_number << " ";
		}
		out << "\n";
	}
}



void main() {
	int A[4][4];
	int min;
	int stolb;
	double sum;
	sum = 3.;
	min = 1000000000;
	create_file();
	std::ifstream file("Task_3.txt");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			file >> A[i][j];
		}
	}
	
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if ((min > A[i][j]) && (i>j)) {
				min = A[i][j];
				stolb = j;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		sum += (2 + A[i][stolb] - A[i][stolb]* A[i][stolb]) / 8.;
	}

	std::vector <double> B;

	for (int i = 0; i < 4;i++) {
		B.push_back(std::min(A[i][0],A[i][2]));
	}


	std::cout <<"Min: "<< min << "\n" << "Sum: "<<sum << "\n";
	std::cout << "Array: ";
	for (int i = 0; i < B.size(); i++) {
		std::cout << B[i] << " ";
	}
}