//
//  Vehicle_C.hpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#ifndef Vehicle_C_hpp
#define Vehicle_C_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Vehicle_C
{
private:
    string manufacturer;
    int yearBuilt;
public:
    Vehicle_C();
    Vehicle_C(string, int);
    
    void Set_Manufacturer(string);
    void Set_YearBuilt(int);
    
    string Get_Manufacturer() const;
    int Get_YearBuilt() const;
    
    void Display_Info();
    
};

#endif /* Vehicle_C_hpp */
