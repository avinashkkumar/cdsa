#include<iostream>
int main(){
    int n;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            std::cout << " " << i+1 << " " ;
        }
        std::cout << std::endl;
        
    }
    
}