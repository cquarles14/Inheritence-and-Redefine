// Catlynne Quarles
// CIS 1202 R02
// April 26, 2022
// Inheritence and Redefine


#include "SUV_C.hpp"

int main()
{
    string manufacturer;
    int yearBuilt;
    int numDoors;
    int gasCap;
    Vehicle_C vehicle;
    Car_C car;
    SUV_C suv;
    
    cout << "Vehicle Program" << endl << endl;
    
    cout << "Vehicle:" << endl;
    cout << "Enter the manufacturer: " << endl;
    getline(cin, manufacturer);
    cout << "Enter the year built: " << endl;
    cin >> yearBuilt;
    
    vehicle.Set_Manufacturer(manufacturer);
    vehicle.Set_YearBuilt(yearBuilt);
    
    vehicle.Display_Info();
    
    cout << endl << endl << "Car:" << endl;
    cout << "Enter the manufacturer: " << endl;
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: " << endl;
    cin >> yearBuilt;
    cout << "Enter the number of doors: " << endl;
    cin >> numDoors;
    
    car.Set_Manufacturer(manufacturer);
    car.Set_YearBuilt(yearBuilt);
    car.Set_NumDoors(numDoors);
    
    car.Display_Info();
    
    cout << endl << endl << "SUV:" << endl;
    cout << "Enter the manufacturer: " << endl;
    cin.ignore();
    getline(cin, manufacturer);
    cout << "Enter the year built: " << endl;
    cin >> yearBuilt;
    cout << "Enter the number of doors: " << endl;
    cin >> numDoors;
    cout << "Enter the gas tank capacity: " << endl;
    cin >> gasCap;
    
    suv.Set_Manufacturer(manufacturer);
    suv.Set_YearBuilt(yearBuilt);
    suv.Set_NumDoors(numDoors);
    suv.Set_GasTankCapacity(gasCap);
    
    suv.Display_Info();
    
    return 0;
}
