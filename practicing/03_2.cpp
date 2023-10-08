#include<iostream>
#include<iomanip>
int main(){
    // floating point numbers are used to represent the fractional numbers that is used in the program    
    // There are 3 types of floating point numbers that are can be used
    // float precision 7
    // double precision 15
    // long double precision 15+

    float floating_var{3.4334f};
    double double_var{5.9878987654324};
    long double long_double_var{9.13413287867345l};

    // printing each of the numbers
    std::cout << std::setprecision(20);
    std::cout << "The float var is : " << floating_var << "The size of float is " << sizeof(floating_var) << std::endl;
    std::cout << "The double var is : " << double_var << "the size of the double var is " << sizeof(double_var) << std::endl;
    std::cout << "The long double var is : " << long_double_var << "The size of long double is " << sizeof(long_double_var) << std::endl;

    // the sufix with the use of the floating point number is important as it will represent the abount of precision the given number have.
    // if the sufix is not there at the end of the number for long or float it will be by default considered as double.

    // the floating point numbers are can be used to represent the scientific numbers wiht the power of 10 using e14 as an example
    long double long_double_scientific_var{23.2345664543e34l};
    std::cout << long_double_scientific_var << std::endl;

    // dividing number with 0 will give infinity

    double double_zero_var {};
    double double_result_var {double_var/double_zero_var};
    std::cout << "The rulult of dividing double with zero is : " << double_result_var << std::endl;

    double double_zero_zero_var {};
    double double_zero_by_zero_var{double_zero_var/double_zero_zero_var};
    std::cout << "the result of dividing zero by zero is : " << double_zero_by_zero_var << std::endl;




    return 0;
}