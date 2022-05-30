/*
* 30.Postfix and Prefix
*/

#include <iostream>

int main() {

	/*
	*	value++	←
	*		 ↑ Postfix increment
	* 	→ ++value
	*	  ↑ Prefix increment
	*/

	int value = NULL;	//*	NULL equals zero
	int value_2 = NULL;	//*
	
	value = 100;
	std::cout << value++ << std::endl;	//* cout value first and then do the increment
	std::cout << value << std::endl;

	std::cout << std::endl;

	value = 100;
	std::cout << ++value << std::endl;	//* do the increment first and then cout value
	std::cout << value << std::endl;

	std::cout << std::endl;

	value = 100;
	value_2 = value++;					//* set value_2 the value of 'value' first and then do the increment
	std::cout << value << std::endl;
	std::cout << value_2 << std::endl;

	std::cout << std::endl;

	value = 100;
	value_2 = ++value;					//* do the increment first and then set value_2 the value of 'value'
	std::cout << value << std::endl;
	std::cout << value_2 << std::endl;

	return 0;
}