import java.time.Year;

public class Car {
    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
        Car.currentYear = Year.now().getValue();
    }
    private String make;
    private String model;
    private int year;
    public static int currentYear;
    
    public void displayInfo() {
        System.out.printf("Marka: %s%nModel: %s%nRok: %d%n", make, model, year);
    }    
    
    public int getCarAge() {
        return Car.currentYear - this.year;
    }

    public boolean isSameCar(Car otherCar) {
        return  this.make.equals(otherCar.make) &&
                this.model.equals(otherCar.model) &&
                this.year == otherCar.year;
    }

    public static void main(String[] args) {
        Car c1 = new Car("Honda", "Civic", 1994);
        c1.displayInfo();    
        System.out.println(c1.getCarAge());
        
        Car c2 = new Car("Toyota", "Corolla", 2007);
        c2.displayInfo();
        System.out.println(c2.isSameCar(c1));
    }
}