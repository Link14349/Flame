#include <iostream>
#include "include/Flame.h"

int main() {
    std::cout << Flame::encryption("绿谷出久😂") << std::endl;
    std::cout << Flame::decryption(Flame::encryption("绿谷出久😂")) << std::endl;
    return 0;
}