#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// code below takes longer time to execute, output is correct but the time complexity is higher.
// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int x,n,q,s,p;
//     vector<int> vint;
    
//     std::cin >> n;
    
    
//     for(int i=0;i<n;i++){
//         std::cin >> x;
//         vint.push_back(x);
//     }
    
//     std::cin >> q;
//     for(int j=0;j<q;j++){
//         std::cin >> s ;
//         auto it = std::lower_bound(vint.begin(),vint.end(),s);
//         if(*it == s){
//             std::cout << "Yes " << std::distance(vint.begin(),it) + 1 << std::endl;
//         }else{
//             std::cout << "No " << it-vint.begin()+1 << std::endl;
//         }            
//     }
//     return 0;
// }


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x,n,q,s,p;
    vector<int> vint;
    
    std::cin >> n;
    
    
    for(int i=0;i<n;i++){
        std::cin >> x;
        vint.push_back(x);
    }
    
    std::cin >> q;
    for(int j=0;j<q;j++){
        std::cin >> s ;
        auto it = std::lower_bound(vint.begin(),vint.end(),s);
        if(*it == s){
            std::cout << "Yes " << std::distance(vint.begin(),it) + 1 << std::endl;
        }else{
            std::cout << "No " << it-vint.begin()+1 << std::endl;
        }
        
            
    }
    return 0;
}

