#include <iostream>
#include <cstdint>

class fraction{
    private:
        int32_t _num;
        uint32_t _denom;
        
    public:
        fraction(double real_fract);
        fraction(int32_t num, uint32_t denom);
        void reduce();
        void print();
};
