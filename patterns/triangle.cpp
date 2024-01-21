#include<iostream>
int main(){
    int n = 5;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 1; j < n-i; j++)
        {
            std::cout << j ;
        }
        int x =2*i +1;
        std::cout << "\t";
        std::cout << x ;
        std::cout << " " ;
        for (size_t j = 0; j <= x -1; j++)
        {
            std::cout << j ;
        }
        std::cout << std::endl;
        
        
    }
    
}