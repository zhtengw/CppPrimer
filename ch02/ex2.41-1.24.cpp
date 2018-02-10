#include <iostream>
struct Sales_data {
	std::string ISBN;
	unsigned num_sold = 0;
	double income = 0.0;
};
int main() {
	// function of ex1.24
	Sales_data currRec, item, totalRec;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;
	
	double price = 0.0;
	if(std::cin >> currRec.ISBN >> currRec.num_sold >> price){
		int cnt = 1;
		int tcnt = 1;
		currRec.income = currRec.num_sold * price;
		totalRec.ISBN = currRec.ISBN;
		totalRec.num_sold = currRec.num_sold;
		totalRec.income = currRec.income;
		while(std::cin >> item.ISBN >> item.num_sold >> price){
			item.income = item.num_sold * price;

			totalRec.num_sold += item.num_sold;
			totalRec.income += item.income;
			++tcnt;
			if(currRec.ISBN == item.ISBN) {
				currRec.num_sold += item.num_sold;
				currRec.income += item.income;
				++cnt;
			}else {
				std::cout << currRec.ISBN << std::endl
					<< " Records " << cnt
					<< " times" << std::endl;
				std::cout << currRec.ISBN << ' ' << currRec.num_sold << ' '
					<< currRec.income << ' '
					<< currRec.income/currRec.num_sold
					<< std::endl;
				currRec.ISBN = item.ISBN;
				currRec.num_sold = item.num_sold;
				currRec.income = item.income;
				cnt = 1;
			}


		}
		std::cout << currRec.ISBN << std::endl
			<< " Records " << cnt
			<< " times" << std::endl;
		std::cout << currRec.ISBN << ' ' << currRec.num_sold << ' '
			<< currRec.income << ' '
			<< currRec.income/currRec.num_sold
			<< std::endl;

		std::cout << "共有" << tcnt << "条销售记录，"
			<< "总计：" << std::endl;
		std::cout << totalRec.ISBN << ' ' << totalRec.num_sold << ' '
			<< totalRec.income << ' '
			<< totalRec.income/totalRec.num_sold
			<< std::endl;


	} else {
		std::cerr << "No data input!" << std::endl;
		return -1;
	}

	return 0;
}
