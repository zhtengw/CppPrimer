#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item book1, book2;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;

	while(std::cin >> book1) {
		std::cout << book1 << std::endl;
	}
	return 0;
}
