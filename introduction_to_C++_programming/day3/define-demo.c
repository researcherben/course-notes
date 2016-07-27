#include <cstdlib>   // or stdlib.h
#include <iostream>
#include "someheader.h"
#include "someheader.h"

int main(){
    #ifdef WINDOWS 
    system("cls"); // windows
    #else
    system("clear"); // linux
    #endif
    
    #ifdef DEBUG
    std::cerr << "Debug - the value of n is " << n << std::endl;
    #endif

}
