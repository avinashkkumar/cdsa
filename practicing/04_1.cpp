#include<iostream>
#include<iomanip>
int main(){
    // booleans are used in a program to make decisions
    // when some decision is to be made in that case the boolean vairable is used
    // in case of the if statement if the boolean is true the if condition is executed
    // in case the variable is fale the else statement is executed or no statement is 
    // executed in case of absence of any else statement


    bool red{true};
    bool green{false};

    if (red==true)
    {
        std::cout << "the light is red" << std::endl;
    }else
    {
        std::cout << "the light is green" << std::endl;
    }
    
    



}