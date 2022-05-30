/*
* (29) 13.Extract RGBA from HEX (Bitwise AND)
*/

#include <iostream>
#include <iomanip>

int main() {

	uint32_t Color = 0xFF7F50FC;
	uint32_t Red = (Color & 0xFF000000) >> 24;
	uint32_t Green = (Color & 0x00FF0000) >> 16;
	uint32_t Blue = (Color & 0x0000FF00) >> 8;
	uint32_t Alpha = (Color & 0x000000FF) >> 0;
	
	std::cout << "Red: " << Red; 
	std::cout << std::hex << " (" << Red << ")" << std::endl;
	std::cout << std::resetiosflags(std::cout.flags());

	std::cout << "Green: " << Green; 
	std::cout << std::hex << " (" << Green << ")" << std::endl;
	std::cout << std::resetiosflags(std::cout.flags());

	std::cout << "Blue: " << Blue; 
	std::cout << std::hex << " (" << Blue << ")" << std::endl;
	std::cout << std::resetiosflags(std::cout.flags());

	std::cout << "Alpha: " <<  Alpha; 
	std::cout << std::hex << " (" << Alpha << ")" << std::endl;
	std::cout << std::resetiosflags(std::cout.flags());

	return 0;
}