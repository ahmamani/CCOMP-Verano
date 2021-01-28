#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string license;
        int year;
    public:
        Vehicle(const string &l, const int y) : license(l), year(y) {}

        virtual const string getDesc() const {
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
        const string getDesc() const {
            return to_string(year) + " " + style + ": " + license;
        }
};

class Camion : public Vehicle {
	string carga; 
	double ancho, alto;
	public:
		Camion (const string l, const int y, const string c, const double an, const double al):
			Vehicle(l,y), carga(c), ancho(an), alto(al) {}
		
		const string &getcarga(){
			return carga;
		}
		const double &getancho(){
			return ancho;
		}
		const double &getalto(){
			return alto;
		}
		const string getDesc() const {
			return to_string(year)+ " "+license+" "+carga+" "+ to_string(alto)+" "+ to_string(ancho);
		}
}; 

void printCaracteristicas(Vehicle *ptr) {
    cout << ptr->getDesc() << endl;
}

int main() {
    Car carRodrigo("XXX-123", 2022, "Mustang Gt500");
    Car carRenzo( "XYZ-123", 2015, "Blue");

    Camion camion1("cvb-654", 2012, "2TN", 3, 5);
    Camion camion2("qwe-345", 2018, "2TN", 3, 5);

    printCaracteristicas(&carRodrigo);
    printCaracteristicas(&carRenzo);
    printCaracteristicas(&camion1);
    printCaracteristicas(&camion2);


    return 0;

}

