//
//  SUV_C.hpp
//  InheritenceRedefinedFunctions
//
//  Created by Catlynne Quarles on 4/24/22.
//

#ifndef SUV_C_hpp
#define SUV_C_hpp

#include <stdio.h>
#include "Car_C.hpp"

class SUV_C : public Car_C
{
private:
    int gasTankCapacity;
public:
    SUV_C();
    SUV_C(int);
    SUV_C(int, int, string, int);
    
    void Set_GasTankCapacity(int);
    
    int Get_GasTankCapacity() const;
    
    void Display_Info();
};
#endif /* SUV_C_hpp */
