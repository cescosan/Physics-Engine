#include <iostream>
#include <array>
#include<math.h>


int main() {
    
    std::array<int, 2> velocity = {4, 5};

    std::cout << "Velocity = " << std::sqrt(std::pow( velocity[0], 2) + std::pow( velocity[1], 2));
    
    
    return 0;
}