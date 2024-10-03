#include <iostream>
#include <ctime>

class Car {
    private:
        std::string make;
        std::string model;
        int year;
    public:
        static int currentYear;
        Car(const std::string make, const std::string model, const int year) {
            this->make = make;
            this->model = model;
            this->year = year;
        }

        inline void displayInfo() {
            std::cout << "Marka: " << make << "\n";
            std::cout << "Model: " << model << "\n";
            std::cout << "Rok: " << year << std::endl;
        }

        inline int getCarAge() {
            return Car::currentYear - this->year;
        }

        inline bool isSameCar(Car* otherCar) {
            return !this->make.compare(otherCar->make) &&
                   !this->model.compare(otherCar->model) &&
                    this->year == otherCar->year;
        }
};

int Car::currentYear = 0;

int main() {
    time_t t;
    time(&t);
    struct tm* now = gmtime(&t);
    Car::currentYear = now->tm_year + 1900;

    Car c1("Honda", "Civic", 1994);
    c1.displayInfo();
    std::cout << c1.getCarAge() << "\n";

    Car c2("Toyota", "Corolla", 2007);
    c2.displayInfo();
    std::cout << c2.getCarAge() << "\n";
    std::cout << (c2.isSameCar(&c1) ? "Same" : "Different") << std::endl;

    return 0;
}
