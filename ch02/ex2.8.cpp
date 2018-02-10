#include <iostream>
int main() {
	std::cout << "\x32\x4d" << '\012';
	std::cout << "\62\115" << '\n';

	std::cout << '\x32' << '\t' << '\x4d' << '\n';
	
	return 0;
}
