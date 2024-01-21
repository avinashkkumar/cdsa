#include<iostream>
int main(){
    char ch;
    std::cout << "enter a character" << std::endl;
    std::cin >> ch;
    if (ch>='a' && ch<='z')
    {
        std::cout << "the character is lower case" << std::endl;
    } else if (ch>='A' && ch<='Z')
    {
        std::cout << "the charater is upper case" << std::endl;
    }else if (ch>='0' && ch<='9')
    {
        std::cout << "the character is numeric" << std::endl;
    }
    
    
    
}