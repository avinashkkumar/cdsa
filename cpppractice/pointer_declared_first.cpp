#include<iostream>

int main(){
    for (size_t i = 0; i < 5000000 ; i++)
    {
    
        // int * new_ptr;
        // new_ptr = new int;
        // *new_ptr = i;
        // std::cout << *new_ptr << std::endl;
        // delete new_ptr;
        int num = i;
        std::cout << i << std::endl;
    }
    
}