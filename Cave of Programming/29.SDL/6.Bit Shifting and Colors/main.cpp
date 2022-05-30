/*
* (29) 6.Bit Shifting and Colors
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>

int main() {

	unsigned char alpha = 255;
	unsigned char red = 71;
	unsigned char green = 204;
	unsigned char blue = 242;

	unsigned color = red;
	color <<= 8; color += green;
	color <<= 8; color += blue;
	color <<= 8; color += alpha;
	
	//std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;
	
	uint32_t* pcolor = new uint32_t(color);
	std::cout << std::hex << *pcolor << std::endl;
	return 0;
}