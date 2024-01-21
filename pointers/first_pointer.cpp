#include<iostream>
int main(){
    int num = 8;
    std::cout << num << std::endl;
    std::cout << &num << std::endl;

    // assigning address of num to a pointer

    int * num_ptr = &num;
    std::cout << *num_ptr << std::endl;

    // TODO make note of this
    // cannot declare a int and use it as a pointer to dereference it 
    // std::cout << *num << std::endl;

    int * ptr = 0;
    std::cout << ptr << std::endl;
}