#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string license;
        int year;
    public:
        Vehicle(const string &l, const int y) : license(l), year(y) {}

        const string getDesc() const {
            return license + " from " + to_string(year);
        }

        const string getLicense() const {
            return license;
        }

        const int getYear() const {
            return year;
        }
};

class Car : public Vehicle {
        string style;
    public:
        Car(const string l, const int y, const string s) :
                Vehicle(l, y), style(s) {}

        const string &getStyle() {
            return style;
        }

        // Overriding
        const string getDesc() {
            return to_string(year) + " " + style + ": " + license;
        }
};

int main() {
    Car carRodrigo("Tipo B", 2022, "Mustang Gt500");
    Car carRenzo( "XYZ-123", 2015, "Blue");

    

    cout << carRodrigo.getDesc() << endl;
    cout << carRenzo.getDesc() << endl;

    return 0;

}

