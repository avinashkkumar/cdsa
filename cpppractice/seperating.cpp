#include <bits/stdc++.h>
using namespace std;
int main(){
    int n {1234};
    int suu{0};
    while ((n%10)!=0)
    {
        int tn;
        tn = n%10;
        // cout << tn << endl;
        n = n/10;
        suu = suu + tn;
    }
    cout << suu << endl;
    
}