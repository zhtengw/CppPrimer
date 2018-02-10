#include <iostream>
struct Sales_data {
	std::string ISBN;
	unsigned num_sold = 0;
	double income = 0.0;
};
int main() {
	// function of ex1.22
	Sales_data book1, books;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;
	
	int cnt = 0;
	double price = 0.0;
	while(std::cin >> book1.ISBN >> book1.num_sold >> price){
		book1.income = book1.num_sold * price;
		if (cnt == 0 ){
			books.ISBN = book1.ISBN;
			books.num_sold = book1.num_sold;
			books.income = book1.income;
		} else {
			books.num_sold += book1.num_sold;
			books.income += book1.income;
		}
		++cnt;
	}

	std::cout << "共销售了: \n" << books.ISBN << ' ' << books.num_sold << ' ' 
		<< books.income << ' ' 
		<< books.income/books.num_sold 
		<< std::endl;
	std::cout << "录入了" << cnt << "条记录" << std::endl;

	return 0;
}
