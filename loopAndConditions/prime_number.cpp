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
    
}

// #include <iostream>
// #include <cmath>

// // Function to check if a number is prime
// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }

//     int sqrtNum = static_cast<int>(sqrt(num));
//     for (int i = 2; i <= sqrtNum; ++i) {
//         if (num % i == 0) {
//             return false; // Found a divisor, not a prime number
//         }
//     }

//     return true; // No divisors found, it's a prime number
// }


// int main() {
//     int n;

//     // Get the value of n from the user
//     std::cout << "Enter a positive integer (n): ";
//     std::cin >> n;
//     std::cout << "Prime numbers up to " << n << ": ";
//     for (int i = 2; i <= n; ++i) {
//         if (isPrime(i)) {
//             std::cout << i << " ";
//         }
//     }
//     std::cout << std::endl;

//     return 0; // Return success
// }
