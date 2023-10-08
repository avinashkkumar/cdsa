#include<iostream>
#include<iomanip>
int main(){
    // character is a single unit of a string 
    // ascii in general is used to store the character in the program.
    // character takes up 1 byte.
    // there are 256 characters that are can be encoded into the ascii
    // it is possible to store an integer into the character, it will be converted 
    // into the corosponding ascii code


    char value = 65;
    std::cout << value << std::endl;
    value = value - 1;
    std::cout << value << std::endl;
    std::cout << static_cast<char>(value + 1) << std::endl;



}