#include <iostream>
struct Sales_data {
	std::string ISBN;
	unsigned num_sold = 0;
	double income = 0.0;
};
int main() {
	// function of ex1.20
	Sales_data book1, book2;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;
	
	double price = 0.0;
	while(std::cin >> book1.ISBN >> book1.num_sold >> price){
		book1.income = book1.num_sold * price;
		std::cout << book1.ISBN << ' ' << book1.num_sold << ' ' 
			<< book1.income << ' ' << price << std::endl;
	}

	return 0;
}
