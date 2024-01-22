#include<iostream>
int main(){
    char ch = 'a';
    // converting integer to character using static_cast 
    // it is the cpp way of type conversion.
    int a = static_cast<int>(ch);
    std::cout << a << std::endl;
}