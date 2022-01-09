#include <iostream>
#include <cmath>
#include <time.h>
#include <vector>

int main() {
	int A[4][4];
	double pros = 1;


	srand(time(NULL));
	for (int i = 0; i < 4; i++) {

		for (int j = 0; j < 4; j++) {
			A[i][j] = -1000 + rand() % (1000 - (-1000) + 1);

		}
	}

	int buf;
	int buf_i;
	int buf_j;

	

	for (int i = 0; i < 4; i++) {
		int* a = &buf;
		int* b = &buf_i;
		int* c = &buf_j;

		if (A[i][3 - i] > buf and A[i][3 - i] < 0) {
			*a = A[i][3 - i];
			*b = i;
			*c = 3 - i;
		}
	}
	
	for (int i = 0; i < 4; i++) {
		pros *= sqrt(abs(A[i][buf_j] - 1)) + 1.7 /
			(4.3 + A[0][buf_j]);
	}
	

	int n = 0;
	

	for (int i = 0; i < 4; i++) {
		int k = 1;
		int j = 0;
		
		while (k == 1){
			int* nn = &n;
			j++;
			if (A[i][j] > 0){
				*nn += 1;
				k = 0;
			}
			else if (j == 3) {
				k = 0;
			}
		}
	}
	
	std::vector<double> vec(n);
	double pross = 1;

	for (int i = 0; i < 4; i++) {
		int k = 1;
		int j = 0;

		while (k == 1) {
			
			j++;
			if (A[i][j] > 0) {
				for (int jj = 0; jj < 4; jj++) {
					if (A[jj][j] > 0){
						pross *= A[jj][j];
					}
				}

				vec[j] = pross;

				k = 0;
			}
			else if (j == 3) {
				k = 0;
			}
		}
	}



	// buf  макс элемент диагон
	// pros формкла
	// vec массив
	
	
	return 0;
}