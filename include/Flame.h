#ifndef FLAME_FLAME_H
#define FLAME_FLAME_H

#include <string>

using std::string;
namespace Flame {
    static char table[] = "abcdefghijklmnop";
    typedef unsigned long UL;
    string encryption(string);
    string decryption(string);
}

#endif //FLAME_FLAME_H
