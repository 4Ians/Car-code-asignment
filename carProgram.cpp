#include <iostream>
#include <string>
using namespace std;
// 1.Define a class named Car
class Car {
public:
// 2. Public data members 
    string brand;
    string model;
    float price;
    int mileage;
//3: Public member function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
    //4. Public member function to simulate driving
    void drive(int distance) {
        mileage += distance; //for increasing
        cout << "Driven " << distance << " miles. Updated mileage: " << mileage << " miles" << endl;
    }
};
/*the main function*/
int main() {
    // car objects 
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.mileage = 500;

    //displaying the car details
    cout << "Car Details:" << endl;
    myCar.display();

    // simulating driving for(150) miles
    cout << "\nSimulating driving for 150 miles..." << endl;
    myCar.drive(150);

    // additional for 300 miles
    cout << "\nSimulating driving for 300 miles..." << endl;
    myCar.drive(300);

    return 0;
}
