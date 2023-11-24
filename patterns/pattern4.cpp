#include<iostream>
int main(){
    int count = 1;
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            std::cout << count++ << " " ;
        }
        std::cout << std::endl;
        
    }
    
}