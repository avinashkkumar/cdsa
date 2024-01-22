// A
// A B
// A B C
// A B C D

#include<iostream>
int main(){
    int n;
    char ch = 'A';
    std::cout << "enter the number of iterations" << std::endl;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            std::cout << static_cast<char>(ch+j);
        }
        std::cout << std::endl;
        
    }
    
}