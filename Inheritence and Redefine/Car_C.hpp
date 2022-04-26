//
//  Car_C.hpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#ifndef Car_C_hpp
#define Car_C_hpp

#include <stdio.h>
#include "Vehicle_C.hpp"

class Car_C : public Vehicle_C
{
private:
    int numDoors;
public:
    Car_C();
    Car_C(int);
    Car_C(int, string, int);
    
    void Set_NumDoors(int);
    
    int Get_NumDoors() const;
    
    void Display_Info();
    
};

#endif /* Car_C_hpp */
