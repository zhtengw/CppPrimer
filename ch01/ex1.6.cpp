# include <iostream>
int main() {
	
	int v1=0,v2=0;
	std::cin >> v1 >> v2;

/* error code
* 编译器提示: error: expected primary-expression before ‘<<’ token 
* 只要去掉前两行末尾的分号;即可改正。
*	std::cout << "The sum of " << v1;
*		<< " and " << v2;
*		<< " is " << v1+v2 << std::endl;
*/

	// no error code
	std::cout << "The sum of " << v1 
		<< " and " << v2 
		<< " is " << v1+v2 << std::endl;

	return 0;
}
