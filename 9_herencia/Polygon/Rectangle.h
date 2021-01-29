#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Polygon.h"

class Rectangle : public Polygon {
    public: 
        Rectangle(const Point &a, const Point &b);
        Rectangle(const int x0, const int y0, const int x1, const int y1);

        double area() const;
};


#endif