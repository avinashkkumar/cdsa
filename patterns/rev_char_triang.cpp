#include<iostream>
int main(){
    int n = 5;
    // std::cin >> n;
    char c = 65 + n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            std::cout << " " << (char)(c-(i+j)) << " ";
        }
        std::cout << std::endl;
    }
    
}