//
//  SUV_C.cpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#include "SUV_C.hpp"
#include "Car_C.hpp"


SUV_C::SUV_C() : Car_C()
{
    gasTankCapacity = 0;
}

SUV_C::SUV_C(int gasTankCap) : Car_C()
{
    gasTankCapacity = gasTankCap;
}

SUV_C::SUV_C(int gasTankCap, int numDoors, string make, int yearB) : Car_C(numDoors, make, yearB)
{
    gasTankCapacity = gasTankCap;
}

void SUV_C::Set_GasTankCapacity(int gasTankCap)
{
    gasTankCapacity = gasTankCap;
}

int SUV_C::Get_GasTankCapacity() const
{
    return gasTankCapacity;
}

void SUV_C::Display_Info()
{
    cout << "SUV information: " << endl;
    cout << "Manufacturer: " << Get_Manufacturer() << endl;
    cout << "Year built: " << Get_YearBuilt() << endl;
    cout << "Number of Doors: " << Get_NumDoors() << endl;
    cout << "Gas Tank Capacity: " << gasTankCapacity << " GAL" << endl;
}
