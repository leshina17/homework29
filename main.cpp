#include <iostream>
#include "fraction.h"

int main(){
    fraction fract1(15,30);
    fract1.reduce();
    fract1.print();
    
    return 0;
}