#include<iostream>
int main(){
    int n = 5;
    for (size_t i = 0; i < n; i++)
    {
        char c = 65+n-i-1;
        for (size_t j = 0; j <= i; j++)
        {
            std::cout << (char)(c+j);
        }
        std::cout << std::endl;
        
    }
    
}