#include <iostream>

int main(int argc, char** argv) {
	// argc is number of arguments given to program
	// by default first argument is the file we're executing so we have to start from second place
	for (int i = 1; i < argc; i++) {
		std::cout << argv[i] << "\n";
	}
	
	return 0;
}