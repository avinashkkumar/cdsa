#include<iostream>
bool prime_check(int n);
int main(){
    std::cout << prime_check(137) << std::endl;
}

bool prime_check(int n){
    if (n%2==0)
    {
        return false;
    }
    int i = 0 ;
    while(i < n){
        if (n%i==0)
        {
            return false;
        }
        i+2;
        
    }
    
    return true;
}