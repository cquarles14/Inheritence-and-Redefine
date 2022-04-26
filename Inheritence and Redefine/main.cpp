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
}
