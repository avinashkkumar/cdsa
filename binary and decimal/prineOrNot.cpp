#include<iostream>
#include<cmath>
int main(){
    int n;
    std::string str = "true";
    std::cout << "enter the number to check for prime" << std::endl;
    std::cin >> n ;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            str="false";
            break;
        }
    }
    std::cout<< "the number is " << str << std::endl;
    
}