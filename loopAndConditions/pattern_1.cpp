#include<iostream>
int main(){
    int n;
    std::cout << "enter the number of iterations";
    std::cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            std::cout << i + j - 1 ;
        }
        std::cout << std::endl;
        
    }
    
}
//  1
//  2 3 
//  3 4 5
//  4 5 6 7 
//  5 6 7 8 9