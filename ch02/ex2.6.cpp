#include <iostream>
int main() {
	int month = 9, day = 7;
	std::cout << month << " :: " << day << std::endl;

	// 编译器提示error: invalid digit "9" in octal constant
	// int month1 = 09, day1 = 07;
	int month1 = 9, day1 = 07;
	std::cout << month1 << " :: " << day1 << std::endl;
	
	return 0;
}
