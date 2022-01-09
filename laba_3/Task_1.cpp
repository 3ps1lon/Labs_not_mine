#include <iostream>
#include <cmath>

int main() {
	double X[8];
	double k, buf;
	int n;
	k = 1000000;

	for (int i = 0; i < 8; i++) {
		X[i] = log(2.3 * i + 2);
	}

	for (int i = 0; i < 8; i++) {
		if (k > X[i] and X[i] >2){
			k = X[i];
			n = i;
	
		}
	}

	buf = X[7];
	X[7] = k;
	X[n] = buf;

	return 0;
}	