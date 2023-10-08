#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int fact {1};
    for(size_t i = n; i > 0; i--){
        fact = fact*i;
    }
    cout << fact << endl;
}