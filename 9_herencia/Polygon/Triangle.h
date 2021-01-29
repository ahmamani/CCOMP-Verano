#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include "Polygon.h"

class Triangle : public Polygon {
    public: 
        Triangle(const Point &a, const Point &b, const Point &c);
        double area() const;
};


#endif