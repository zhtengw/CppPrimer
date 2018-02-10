#include <iostream>
struct Sales_data {
	std::string ISBN;
	unsigned num_sold = 0;
	double income = 0.0;
};
int main() {
	// function of ex1.21
	Sales_data book1, book2;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;
	
	double price1 = 0.0;
	double price2 = 0.0;
	std::cin >> book1.ISBN >> book1.num_sold >> price1
		>> book2.ISBN >> book2.num_sold >> price2;
	book1.income = book1.num_sold * price1;
	book2.income = book2.num_sold * price2;
	std::cout << book1.ISBN << ' ' << book1.num_sold+book2.num_sold << ' ' 
		<< book1.income+book2.income << ' ' 
		<< (book1.income+book2.income)/(book1.num_sold+book2.num_sold) 
		<< std::endl;

	return 0;
}
