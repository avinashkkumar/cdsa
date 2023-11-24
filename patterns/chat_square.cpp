#include <iostream>
int main(){
    int n;
    std::cin >> n ;
    char ch = 97;
    for(size_t i = 0 ; i < n ; i++){
        for (size_t j = 0; j < n; j++)
        {
            std::cout << " " << (char)(ch + i) << " ";
        }
        std::cout << std::endl;
        
    }
}