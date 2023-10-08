#include<iostream>
#include<string>
int main(){
    int age;
    std::string full_name;
    std::string name;

    std::cout << "Please enter your age : ";
    std::cin >> age;

    std::cout << "please enter your name : "; 
    std::cin >> name;
    
    
    // we have to use the below line in order to make sure that the getline function works and take the input
    // else it will not take any input.
    // the thing is that after using the cin in the program the getline function dose not work.
    std::cin.ignore();

    // normal output
    std::cout << "Your age is " << age << " and your name is " << name << std::endl;
    
    std::getline(std::cin,full_name);
    std::cout << "your full name is : " << full_name << std::endl;




    // error message from the porgram
    std::cerr << "This is a error message" << std::endl;

    // log message from the program
    std::clog << "This is a log message" << std::endl;

    std::getchar();

}