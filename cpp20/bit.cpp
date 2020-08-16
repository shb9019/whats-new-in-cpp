/**
 * C++ 20 has a new bit library for bitwise stuff.
 */

#include <bit>
#include <bitset>
#include <iostream>
 
int main() {
    std::cout << std::boolalpha;

    // Check if a number has a single set bit.
    for (uint i = 0; i < 10; i++) {
        std::cout << std::bitset<8>(i) << " has single set bit: "
                  << std::has_single_bit(i) << std::endl; 
    }
    std::cout << std::endl;

    // Find smallest power of 2 not less than.
    for(uint i = 1; i < 100; i += 10) {
        std::cout << std::bitset<8>(i) << " has bit ceil: "
                  << "(" << std::bitset<8>(std::bit_ceil(i)) << ")\n";
    }
    std::cout << std::endl;

    // Find smallest power of 2 not greater than.
    for(uint i = 1; i < 100; i += 10) {
        std::cout << std::bitset<8>(i) << " has bit floor: "
                  << "(" << std::bitset<8>(std::bit_floor(i)) << ")\n";
    }
    std::cout << std::endl;

    // Find minimum number of bits required to represent a number.
    for (unsigned x = 0; x != 8; ++x) {
        std::cout
            << "bit_width( "
            << std::bitset<4>{x} << " ) = "
            << std::bit_width(x) << '\n';
    }
    std::cout << std::endl;

    // Bitwise rotate left
    std::uint8_t i = 0b00011101;
    std::cout << "i          = " << std::bitset<8>(i) << '\n';
    std::cout << "rotl(i,0)  = " << std::bitset<8>(std::rotl(i,0)) << '\n';
    std::cout << "rotl(i,1)  = " << std::bitset<8>(std::rotl(i,1)) << '\n';
    std::cout << "rotl(i,4)  = " << std::bitset<8>(std::rotl(i,4)) << '\n';
    std::cout << "rotl(i,9)  = " << std::bitset<8>(std::rotl(i,9)) << '\n';
    std::cout << "rotl(i,-1) = " << std::bitset<8>(std::rotl(i,-1)) << '\n';
    std::cout << std::endl;

    // Bitwise rotate right
    std::uint8_t j = 0b00011101;
    std::cout << "j          = " << std::bitset<8>(j) << '\n';
    std::cout << "rotr(j,0)  = " << std::bitset<8>(std::rotr(j,0)) << '\n';
    std::cout << "rotr(j,1)  = " << std::bitset<8>(std::rotr(j,1)) << '\n';
    std::cout << "rotr(j,4)  = " << std::bitset<8>(std::rotr(j,4)) << '\n';
    std::cout << "rotr(j,9)  = " << std::bitset<8>(std::rotr(j,9)) << '\n';
    std::cout << "rotr(j,-1) = " << std::bitset<8>(std::rotr(j,-1)) << '\n';
    std::cout << std::endl;

    // Number of consecutive zero bits starting from most significant
    for (std::uint8_t i : { 0, 0b11111111, 0b00011100 }) {
        std::cout << "countl_zero(0b" << std::bitset<8>(i) << ") = "
                  << std::countl_zero(i) << '\n';
    }
    std::cout << std::endl;

    // Number of consecutive one bits starting from most significant
    for (std::uint8_t i : { 0, 0b11111111, 0b10011100 }) {
        std::cout << "countl_one(0b" << std::bitset<8>(i) << ") = "
                  << std::countl_one(i) << '\n';
    }
    std::cout << std::endl;

    // Number of consecutive zero bits starting from least significant
    for (std::uint8_t i : { 0, 0b11111111, 0b00011100 }) {
        std::cout << "countr_zero(0b" << std::bitset<8>(i) << ") = "
                  << std::countr_zero(i) << '\n';
    }
    std::cout << std::endl;

    // Number of consecutive one bits starting from least significant
    for (std::uint8_t i : { 0, 0b11111111, 0b00011101 }) {
        std::cout << "countr_one(0b" << std::bitset<8>(i) << ") = "
                  << std::countr_one(i) << '\n';
    }
    std::cout << std::endl;


    // Number of set bits
    for (std::uint8_t i : { 0, 0b11111111, 0b00011101 }) {
        std::cout << "popcount(0b" << std::bitset<8>(i) << ") = "
                  << std::popcount(i) << '\n';
    }
    std::cout << std::endl;

    return 0;
}
