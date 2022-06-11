/*
*   17.Tests | 7.Point & Triangle (Practice 7)
*/

#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\22.Tests\Point & Triangle (Practice 7)\func.h"
#include <vector>

int main()
{
	system("cls"); // Clear Vscode Terminal
	std::cout << std::fixed << std::setprecision(2); // Set cout precision for floating point entities

	// Test site(Perimeter, Area): https://planetcalc.com/9423/
	// Test site(Center coordinate): https://www.mathopenref.com/coordcentroid.html
	{
		// Create 'Triangle' vector that containing 'Triangle' objects
		std::vector<Triangle> triangles;
		Point points[3]{ Point(1, 2), Point(3, -1), Point(5, 5) };
		triangles = {
			Triangle(points[0], points[1], points[2]),	// Create 'Triangle' object via constructor 1
			Triangle(1, 2, 3, -1, 5, 5)					// Create 'Triangle' object via constructor 2
		};

		triangles[0].DisplayInfo(1);
		triangles[1].DisplayInfo(1);
	}	// End of the scope, The vector 'triangles' & Point array 'points' will be destroyed

	return 0;
}