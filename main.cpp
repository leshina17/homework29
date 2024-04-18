#include <iostream>
#include "fraction.h"

int main(){
    double f;

    std::cout<<"fraction: "<<std::endl;
    std::cin>>f;
    if(f!=0){
    fraction fract=fraction(f);
    std::cout<< fract;
}
    return 0;
}