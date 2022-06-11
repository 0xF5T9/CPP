#pragma once

class Point
{
private:

    /*  Class Properties (Private)  */
    double x = 0.0;
    double y = 0.0;

public:

    /*  Constructors & Destructor  */
    Point() {}
    Point(double x, double y): x(x), y(y) {}
    ~Point() {}

public:

    /*  Getters & Setters  */
    void setX(double x);
    double getX();
    void setY(double y);
    double getY();

public:

    /*  Overload Operator  */ 
    Point operator+(const Point &p) // Expression: Point + Point
    {
        Point ret;
        ret.x = this->x + p.x;
        ret.y = this->y + p.y;
        return ret;
    }  
    Point operator+(const double &d) // Expression: Point + double
    {
        Point ret;
        ret.x = this->x + d;
        ret.y = this->y + d;
        return ret; 
    }  
};