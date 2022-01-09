#include <iostream>
#include <string>


int main() {
	const int sence = 5;
	int maax;
	maax = 0;
	std::string words[sence] = { "Something\n New","Lo\nl", "Hello\n\n","hisad\tWeb","" };
	
	for (int i = 0; i < 5; i++) {
		if (words[i].size() != 0) {
			for (int j = 0; j< words[i].size(); j++) {
				if (words[i][j] == '\n') {
					maax += 1;
					break;
				}
			}
		}
		
	}
	std::cout << maax;
	return 0;
}