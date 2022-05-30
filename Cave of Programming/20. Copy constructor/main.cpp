/*
* 20.Copy constructor
*/

#include <iostream>	//	Input Output Stream - Standard C++ Library

class point {
private:

public:
	/*	Class Properties	*/
	int x;
	int y;
	point(int _x, int _y) {	//	Constructor
		this->x = _x;
		this->y = _y;
		std::cout << "[Debug:#point] Constructor called" << std::endl;
	}
	point(const point& _copy) {	//	Copy Constructor | _copy = address of the passed object (Same class only)
		this->x = _copy.x;
		this->y = _copy.y;
		std::cout << "[Debug:#point] Copy Constructor called" << std::endl;
	}
	~point() {	//	Destructor
		std::cout << "[Debug:#point] Destructor called" << std::endl;
	}
	void Print() const {
		std::cout << this->x << " " << this->y << std::endl;
	}
};

int main() {

	point pointObject1(10, 15);	//	Create 'point' class object (pointObject1)
	pointObject1.Print();	//	Cout 'pointObject1' object property values

	std::cout << std::endl;

	point pointObject2 = pointObject1;	//	Create 'point' class object (pointObject2) by coping object 'pointObject1' [*1]
	pointObject2.Print();	//	Cout 'pointObject2' object property values

	std::cout << std::endl;

	point pointObject3(pointObject1);	//	Create 'point' class object (pointObject3) by coping object 'pointObject1' | Same as [*1]
	pointObject3.Print();	//	Cout 'pointObject3' object property values

	std::cout << std::endl;
	return 0;
}