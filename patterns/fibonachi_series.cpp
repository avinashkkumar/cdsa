//  code to give fib series upto n iterations.
#include<iostream>
int main(){
    int n;
    std::cout << "Enter the iteration of fibonachi series" << std::endl;
    std::cin >> n;
    int a = 0;
    int b = 1;
    std::cout << a << std::endl << b << std::endl;
    for (size_t i = 0; i < n-2; i++)
    {
        int fibSeries = a + b;
        std::cout << fibSeries << std::endl;
        a = b;
        b = fibSeries;
    }
    
}