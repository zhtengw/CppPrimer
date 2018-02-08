#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item book1, books;
	std::cout << "请输入ISBN、数量以及单价: " << std::endl;

	int cnt = 0;	// 初始化销售记录的条数
	while(std::cin >> book1) {
		if (cnt == 0){
			books = book1;
		} else {
			books += book1;
		}
		++cnt;	// 增加一条记录
	}

	std::cout << "共销售了: "<< std::endl << books << std::endl;
	std::cout << "录入了" << cnt << "条记录" << std::endl;
	return 0;
}
