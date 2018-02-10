#include <iostream>
int main() {
	int i = 0;
	//double* dp = &i; // 不能给指向double类型的指针赋指向int对象的地址
	//int *ip = i; // ip是指针，不能给它赋int型对象的值
	int *p = &i;
	
	return 0;
}
