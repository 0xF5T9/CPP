#include "C:\Users\truon\Desktop\C++\CPP\Codelearn\19.Relation between objects 2\Calculate Polyline's length (Practice 3)\Polyline.h"

// Class: Polyline | Getters & Setters Definitions
void Polyline::setVPoints(std::vector<Point> points)
{
    this->points = points;
}

std::vector<Point> Polyline::getVPoint()
{
    return this->points;
}

// Class: Polyline | Class Function Definitions
void Polyline::appendPoint(Point point)
{
    this->points.push_back(point);
}

void Polyline::appendPoint(int x, int y)
{
    this->points.push_back(Point(x, y));
}

double Polyline::getLength(bool cout)
{
    // Tempory double variable to store results
    double temp_length = 0;

    /* 
     *  WHY "this->points.size() - 1" ?
     *  - To prevent calculate invalid element
     *  i.e 1: 
     *  Polyline1 instance have 3 points (A -> B -> C)
     *  So Polyline1 only have 2 lines: AB, BC
     *  Therefore only 2 loops are required
     * 
     *  i.e 2: 
     *  Polyline2 instance have 5 points (A -> B -> C -> D -> E)
     *  So Polyline2 only have 4 lines: AB, BC, CD, DE
     *  Therefore only 4 loops are required
     */
    for (int i = 0; i < this->points.size() - 1; i++)
    {
        // Calculate length between 2 points formula: sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);

        // Get first point coordinates
        int x1 = this->points[i].getX();
        int y1 = this->points[i].getY();

        // Get second point coordinates
        int x2 = this->points[i + 1].getX();
        int y2 = this->points[i + 1].getY();

        // Calculate distance between 2 points
        double temp_distance = std::sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);

        // Add up the result of the calculated line length.
        temp_length += temp_distance;
    }
    if (cout == true)
        std::cout << "The polyline length is: " << temp_length << std::endl;
    return temp_length;
}