#include <iostream>
int addnumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}
int main(){
    // This is a single line comment
/*
This 
is 
a 
multi
line 
comment
*/
    std::cout << "hello world Check, Compiler is working." << std::endl;
    int first_num = 56;
    int second_num = 54;
    int sum = addnumbers(first_num, second_num);
    std::cout << "The sum of numbers are : " << sum << std::endl;
    std::cout << "Inline function call of sum : " << addnumbers(33,44) << std::endl;

}