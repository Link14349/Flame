#include <iostream>
#include "../include/Flame.h"

string Flame::encryption(string s) {
    // char 1 byte
    // 8
    // 0        0000000
    // 符号位    数字位
    // 1010 0101
    string ret;
    for (UL i = 0; i < s.length(); i++) {
        char c = s[i];
        char first = (c >> 4) + 8;
        char second = c & 15;
        ret.push_back(table[first]);
        ret.push_back(table[second]);
    }
    return ret;
}
string Flame::decryption(string s) {
    string ret;
    for (UL i = 0; i < s.length(); i += 2) {
        char first = s[i];
        char second = s[i + 1];
        first -= 105;
        second -= 97;
        first <<= 4;
        second += first;
        ret.push_back(second);
    }
    return ret;
}