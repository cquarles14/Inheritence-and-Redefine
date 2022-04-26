//
//  Car_C.cpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#include "Car_C.hpp"

Car_C::Car_C() : Vehicle_C()
{
    numDoors = 0;
}

Car_C::Car_C(int numD) : Vehicle_C()
{
    numDoors = numD;
}

Car_C::Car_C(int numD, string make, int yearB) : Vehicle_C(make, yearB)
{
    numDoors = numD;
}

void Car_C::Set_NumDoors(int numD)
{
    numDoors = numD;
}

int Car_C::Get_NumDoors() const
{
    return numDoors;
}

void Car_C::Display_Info()
{
    cout << "Car information: " << endl;
    cout << "Manufacturer: " << Get_Manufacturer() << endl;
    cout << "Year built: " << Get_YearBuilt() << endl;
    cout << "Number of doors: " << numDoors << endl;
}
