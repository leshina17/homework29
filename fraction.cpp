#include <math.h>
#include "fraction.h"


fraction::fraction(double real_fract){
    int c=0;
    int after_dot=static_cast<int>(real_fract);
    double fract=real_fract-after_dot;
    for (int i=0;;i++){
        fract=fract*10;
        c++;
        if (static_cast<int>(fract)==fract)
        break;
    }
    _denom=pow(10,c);
    _num=after_dot*_denom+fract;
    std::cout << (*this);
    reduce();
}

int nod(int x, int y){
    int tmp=0;
    while (y!=0){
        tmp=y;
        y=x%y;
        x=tmp;
    }
    return x;
}

void fraction::reduce(){
    int n=nod(_num,_denom);
    _num=_num/n;
    _denom=_denom/n;
}
