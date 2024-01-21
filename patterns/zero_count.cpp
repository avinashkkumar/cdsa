#include<iostream>
int main(){
    int n,k;
    std::cin >> n >> k;
    if((float)n/(float)k==1){
        std::cout << 0 << std::endl;
    }
    else if ((float)n/(float)k>1.0 )
    {
        std::cout << 1 << std::endl;
    }
    
    
}