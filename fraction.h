#include <iostream>
#include <cstdint>

class fraction{
    private:
        int32_t _num;
        uint32_t _denom;
        void reduce();
        
    public:
    fraction(double real_fract);
    friend std::ostream& operator<<(std::ostream& os, const fraction& tmp){
        os << tmp._num << "/" << tmp._denom << std::endl;
        return os;
    }
};