#include <bits/stdc++.h>
int main(){
    int number{24};
    int *ptr_number{nullptr};
    ptr_number = new int;
    *ptr_number = number;
    std::cout << *ptr_number << std::endl;
    std::cout << &number << std::endl;
    std::cout << ptr_number << std::endl;
}