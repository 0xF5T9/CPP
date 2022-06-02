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
    friend Point operator+(const Point &p1, const Point &p2);
    friend Point operator+(const Point &p, const double d);
    friend Point operator+(const double d, const Point &p);
};

inline Point operator+(const Point &p1, const Point &p2)
{
    Point ret;
    ret.x = p1.x + p2.x;
    ret.y = p1.y + p2.y;
    return ret;
}

inline Point operator+(const Point &p, const double d)
{
    Point ret;
    ret.x = p.x + d;
    ret.y = p.y + d;
    return ret;
}

inline Point operator+(const double d, const Point &p)
{
    Point ret;
    ret = p + d;
    return ret;
}