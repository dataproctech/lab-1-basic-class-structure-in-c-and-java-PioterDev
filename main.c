#include <stdio.h>
#include <stdlib.h>

#define NEW_Car(Name) \
    Car* Name = malloc(sizeof(Car)); \
    Name->_Car = _Car; \
    Name->displayInformation = displayInformation; \

#define INIT_Car(car, make, model, year) car->_Car(car, make, model, year);


typedef struct Car {
    char* make;
    char* model;
    int year;
    void (*_Car)(struct Car*, char*, char*, int);
    void (*displayInformation)(struct Car*);
} Car;

void _Car(Car* this, char* make, char* model, int year) {
    this->make = make;
    this->model = model;
    this->year = year;
}

void displayInformation(Car* this) {
    printf("Marka: %s\nModel: %s\nRok: %d\n", this->make, this->model, this->year);
}


int main(int argc, char** argv) {
    char make[] = "Honda";
    char model[] = "Civic";
    int year = 1994;

    NEW_Car(c);
    INIT_Car(c, make, model, year);
    c->displayInformation(c);
    free(c);
    
    return 0;
}