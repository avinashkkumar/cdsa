// A B C 
// A B C
// A B C

#include<iostream>
int main(){
    int n;
    char ch = 'A';
    std::cout << "Enter the number of iterations";
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << static_cast<char>(ch+j) << " ";
        }

        std::cout << std::endl;
        
    }
    
}