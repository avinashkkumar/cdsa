#include<iostream>
int main(){
    int n;
    std::cout << "Enter the number of iterations" ;
    std::cin >> n;
    char ch = 'A';
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            std::cout << static_cast<char>(ch+i) << " ";
        }
        std::cout << std::endl;
        
    }
    
}



// AAAA
// BBBB
// CCCC
// DDDD