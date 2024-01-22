#include <iostream>
#include <cmath>
int primeNumberCheck(int n);
int main()
{
    int n;
    std::cout << "Enter a number to check if that is prime or not" << std::endl;
    std::cin >> n;
    for (size_t i = 2; i <= n; i++)
    {
        std::cout << primeNumberCheck(i) << std::endl;
    }
    
    
}

int primeNumberCheck(int n){
    int sqrtn = static_cast<int>(std::sqrt(n));
    // take care of naming a variable, do not name a variable that corospon to a function that is included with the header file.
    for (int i = 2; i <= sqrtn; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
        
    }
    return 1;
    
