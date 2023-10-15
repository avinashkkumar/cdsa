#include <bits/stdc++.h>
using namespace std;
int main(){
    long n = 5;
    // cin >> n;
    long factsum{0};
    for(size_t j = n ; j > 0 ; j--){
        long fact {1};
        for(size_t i = j; i > 0; i--){
            fact = fact*i;
        }
        factsum += fact;
    } 
    cout << factsum << endl;
}