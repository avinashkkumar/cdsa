#include<iostream>
#include<cmath>

std::string fibCheck(int n){
    for (size_t i = 2; i <= static_cast<int>(sqrt(n)); i++)
    {
        if (n%i==0)
        {
            return "The number is not a prime";
        }
        
        
    }
    return "The number is Prime";
}

int main(){
    int n;
    std::cout << "Enter the number to check for prime or not" << std::endl;
    std::cin >> n;
    std::cout << fibCheck(n) << std::endl;
}