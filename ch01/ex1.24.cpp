#include <iostream>
#include "Sales_item.h"
int main() {
	// currRec是我们正在统计的记录；我们将读入的新值存入item;
	Sales_item currRec,item,totalRec;
	// 读取第一个记录，并确保确实有数据可以处理
	if (std::cin >> currRec) {
		int cnt = 1;			// 保存正在处理的当前记录个数
		int tcnt = 1;			// 保存总记录数
		totalRec = currRec;		// 保存销售统计
		while (std::cin >> item) {	// 读取剩余的记录
			totalRec += item;	// 每输入一条记录，就加到总计里去
			++tcnt;
			if (currRec.isbn() == item.isbn()) { 	// 如果isbn相同
				currRec += item;
				++cnt;		// 将cnt加1
			}
			else {			// 否则，打印前一个值的个数
				std::cout << currRec.isbn() << std::endl
					<< " Records " << cnt 
					<< " times" << std::endl;
				std::cout << currRec << std::endl;
				currRec = item;	// 记住新记录
				cnt = 1;	// 重置计数器
			}

		} // while循环结束
		// 记住打印文件中最后一个值的个数
		std::cout << currRec.isbn() << std::endl
			<< " Records " << cnt 
			<< " times" << std::endl;
		std::cout << currRec << std::endl;

		std::cout << "共有" << tcnt << "条销售记录，"
			<< "总计：" << std::endl;
		std::cout << totalRec << std::endl;
	} else {
		std::cerr << "No data input!" << std::endl;
		return -1;
	}

	return 0;
}
