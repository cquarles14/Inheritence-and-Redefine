//
//  Vehicle_C.cpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#include "Vehicle_C.hpp"


Vehicle_C::Vehicle_C()
{
    manufacturer = "";
    yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string make, int yearB)
{
    manufacturer = make;
    yearBuilt = yearB;
}

void Vehicle_C::Set_Manufacturer(string make)
{
    manufacturer = make;
}

void Vehicle_C::Set_YearBuilt(int yearB)
{
    yearBuilt = yearB;
}

string Vehicle_C::Get_Manufacturer() const
{
    return manufacturer;
}

int Vehicle_C::Get_YearBuilt() const
{
    return yearBuilt;
}

void Vehicle_C::Display_Info()
{
    cout << "Vehicle information: " << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year built: " << yearBuilt << endl;
}
