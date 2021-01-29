#include <cmath>
#include "Rectangle.h"

Point builderPoints[4];

Point *buildArrayPoints(const Point p1, const Point p2, 
        const Point p3, const Point p4) {
    builderPoints[0] = p1;
    builderPoints[1] = p2;
    builderPoints[2] = p3;
    builderPoints[3] = p4;

    return builderPoints;
}

Rectangle::Rectangle(const Point &a, const Point &b) 
        : Polygon(buildArrayPoints( a, 
                                    Point(a.getX(), b.getY()), 
                                    b,
                                    Point(b.getX(), a.getY())
                                  ), 4)  {}

Rectangle::Rectangle(const int x0, const int y0, const int x1, const int y1)
        : Polygon(buildArrayPoints( Point(x0, y0), 
                                    Point(x0, y1), 
                                    Point(x1, y0),
                                    Point(x1, y1)
                                  ), 4)  {}


double Rectangle::area() const {
    int length = points.get(1)->getY() - points.get(0)->getY();
    int width = points.get(2)->getX() - points.get(1)->getX();
    return std::abs((double) length * width);
}
