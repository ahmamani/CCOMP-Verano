#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {

    private:
        double x, y;
    public:
        Point(double _x = 0, double _y = 0) {
            x = _x;
            y = _y;
        }

        double getX() {
            return x;
        }

        double getY() {
            return y;
        }

        void setX(double x) {
            this->x = x;
        }

        void setY(double y) {
            this->y;
        }

        void print() {
            std::cout << "(" << x << ", " << y << ")"; 
        }

};


#endif