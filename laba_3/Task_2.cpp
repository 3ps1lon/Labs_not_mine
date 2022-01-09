#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>

int main() {

	int Y[5];
    int sum = 0;

    srand(time(NULL));
    for (int i = 0; i < 5; i++) {

        Y[i] = -1000 + rand() % (1000 - (-1000) + 1);
    }

    for (int i = 0; i < 5; i++) {
        sum += Y[i] * pow(cos(0.4 * i - 1), 2);
    }

    std::cout << sum;

    std::ofstream outfile("sum.txt");
    outfile << sum << std::endl;
    outfile.close();

	return 0;
}