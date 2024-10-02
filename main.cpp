// include the necessary libraries

// class Car {
    //attributes

    // Constructor

    // Method to display car information
   
// };

#include <iostream>

class Car {
    private:
        std::string make;
        std::string model;
        int year;
    public:
        Car(std:: string makE, std::string modeL, int yeaR) {
            make = makE;
            model = modeL;
            year = yeaR;
        }

        void displayInfo() {
            std::cout << "Marka: " << make << "\n";
            std::cout << "Model: " << model << "\n";
            std::cout << "Rok: " << year << std::endl;
        }
};

int main() {
    
    Car c("Honda", "Civic", 1994);
    c.displayInfo();

    return 0;
}
