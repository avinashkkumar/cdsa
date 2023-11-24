#include<iostream>
int main(){
    int n = 5;
    // std::cin >> n ;
    for (size_t i = 0; i <= n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            char c = 65 + i + j;
            // std::cout << " " << c << " " ;
            // std::cout << " " << (65 + i + j) << " " ;
            std::cout << " " << (char)(65 + i + j) << " " ;
        }
        std::cout << std::endl;
    }
    
}