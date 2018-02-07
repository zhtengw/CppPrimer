# include <iostream>
int main() {

	std::cout << "/*";
	std::cout << "*/";
 
//  error: missing terminating " character
//	std::cout << /* "*/" */;
//

	std::cout << /* "*/" */";

	std::cout << /* "*/" /* "/*" */;
	
// Final Output:
// 	/**/ */ /*
//

	return 0;
}
