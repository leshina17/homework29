#include <cmath>
#include "fraction.h"

fraction::fraction(int32_t num, uint32_t denom){
    _num=num;
    _denom=denom;
}

fraction::fraction(double real_fract){
    _num=real_fract/10;
    _denom=10;
}

int nod(int x, int y){
    if (x==y) 
        return x;
    if (x>y)
        return nod(x-y,y);
    return nod(x,y-x);
}

void fraction::reduce(){
    int n=nod(_num,_denom);
    _num=_num/n;
    _denom=_denom/n;
}

void fraction::print(){
    std::cout << _num << "/" << _denom << std::endl;
}