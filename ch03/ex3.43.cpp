#include <iostream>

using std::cout;
using std::endl;
int main() {

	int ia[4][5] = {
		{1,1,1,1,1},
		{2,2,2,2,2},
		{3,3,3,3,3},
	};

	std::cout << "范围for输出：" << std::endl;
	for (int (&cnt1)[5] : ia) {
		for (int cnt2 : cnt1)
			cout << cnt2 << ' ' ;
		cout << endl;
	}

	std::cout << "下标运算符输出：" << std::endl;
	for (size_t cnt1 = 0; cnt1 != 4; ++cnt1){
		for (size_t cnt4 = 0; cnt4 != 5; ++cnt4)
			cout << ia[cnt1][cnt4] << ' ';
		cout << endl;
	}

	std::cout << "指针输出：" << std::endl;
	for (int (*cnt5)[5]=ia; cnt5 != ia+4; ++cnt5) {
		for (int *cnt6 = *cnt5; cnt6 != *cnt5+5; ++cnt6)
			cout << *cnt6 << ' ';
		cout << endl;
	}
 
	return 0;
}
