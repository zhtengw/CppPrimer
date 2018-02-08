#include <iostream>
int main() {
	int v1=0, v2=0;
	std::cout <<  "Enter two Integers: " << std::endl;
	std::cin >> v1 >> v2;
	
	int cmp,val;
	cmp = v1-v2;

	std::cout << "Integers between " 
		<< v1 << " and " << v2
		<< " are " << std::endl;

	val = cmp;
	while (val < 0) {
		std::cout << v2+val << " ";
		++val; 
	}
	
	val = cmp;
	while (val > 0) {
		std::cout << v2+val << " ";
		--val;
	}

	std::cout << v2 << std::endl;


	return 0;
}
