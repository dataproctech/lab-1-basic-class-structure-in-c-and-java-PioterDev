public class Car {
    public Car(String make, String model, int year) {
        this.make = make;
        this.model = model;
        this.year = year;
    }
    private String make;
    private String model;
    private int year;
    // Attributes    
    
    public void displayInformation() {
        System.out.printf("Marka: %s%nModel: %s%nRok: %d%n", make, model, year);
    }    
    

    public static void main(String[] args) {
        Car c = new Car("Honda", "Civic", 1994);
        c.displayInformation();        
    }
}