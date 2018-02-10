#include <iostream>
int main() {
	// 同样是给int变量赋浮点数初值，用花括号初始化时回报错，如果浮点数是一个常量，则是error
	// 如果浮点数是一个变量的值，则是warning
	
	long double ld = 3.1415926536;
	int a{ld}, b = ld; // 这里编译器只给出warning，ld的值还是会被截断后给a和b初始化。

	std::cout << ld << '\n' << a << '\n' << b << std::endl;

	// std::cin >> int input_value; //  error: expected primary-expression before ‘int’
	int input_value;
	std::cin >> input_value;
	// double salary = wage = 9999.99; // wage 未声明
	
	// int i = {3.14L}; // 这里编译器直接给出错误。
	int i = 3.14L;
	int j = 3.14;
	std::cout << i << '\n' << j << '\n' << input_value << std::endl;
	
	return 0;
}
