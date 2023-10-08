#include <iostream>
#include <string>

int main(){
    /* 
    int soda_count(3.4);
    std::cout << "sods count is " << soda_count << std::endl;
    */

    // the above line of code will strip any available decimal value that we provide and
    // store the entire value into the int variable. It will not care about the .4 that is
    // at the end of the decimal number and int value of soda_count is 3
  
    // this is a type of narrowing conversition the value will be chopped of only if the
    // variable is initilized in the form of funcitonal initilization or assignment.
    // in case of brace initilization the program will not compile at all.

    // to get the size of the datatype we use sizeof
    // std::cout << "size of soda coutn is : " << sizeof(soda_count) << std::endl;


    // types of initilization of variable 

    // garbage initilization
    /*
    int elephant_count;
    std::cout << elephant_count << std::endl;
    */

   
    // braces initilization
    // when initilizing the variable with the brace initilizaiton in that case if the value 
    // is not provided in that case it will default to 0
    // int braces_coutn {234};
    // std::cout << braces_coutn << std::endl;

    // functional initilization
    // int funct_count(34);
    // std::cout << funct_count << std::endl;

    // assignment initilization
    // int assign_count = 23;
    // std::cout << assign_count << std::endl;

    // Types of int
    // signed, unsigned, long, short
    // all the combinations for these type of integers

    // With short 
    short short_var (-300);
    short int short_int(43);
    signed short short_s_var {342};
    unsigned short short_u_var (3245);

    // with int
    int int_var {432};
    signed sign_var{-324};
    unsigned int usign_int_var{984};
    signed int sign_int_var {43};

    // with long taking 4 or 8 bytes
    long long_var{5432};
    long int long_int_var{5224546};
    signed long signed_long_var{-56334653};
    unsigned long unsigned_long_var{35124254};
    unsigned long int unsigned_long_int_var{1354234325};

    // using long long using the 8 bytes for one value
    long long long_long_var{482948798};
    long long int long_long_int_var{285793};
    signed long long sign_long_long_var{-4325243523458};
    signed long long int sign_long_long_int_var{-4243523458};
    unsigned long long int unsign_long_long_int_var{5243523458};
 





}