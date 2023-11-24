#include<iostream>
int main(){
    int n ;
    std::cin >> n;
    for(size_t i = 1; i <= n ; i++){
        for(size_t j = 1; j <= n; j++){
            std::cout << (n-j)+1 << " " ;
        }
        std::cout << std::endl;
    }
}