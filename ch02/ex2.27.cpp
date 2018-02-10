#include <iostream>
int main() {
	const double pi = 3.14;
	const double *cptr = &pi;
	std::cout << *cptr << std::endl;
	std::cout << cptr << std::endl;
	double dval = 3.141;
	cptr = &dval;
	std::cout << *cptr << std::endl;
	std::cout << cptr << std::endl;
	
	int i = -1, &r = i;
	const int *p;
	int *const p1 = &i;
	return 0;
}
