#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int p , q , y , z;
    vector<vector<int>> a = {};
    cin >> p >> q;
    while(p--){
        vector<int> x = {};
        int k;
        cin >> k;
        while(k--){
            int tmp;
            cin >> tmp;
            x.push_back(tmp);
        }
        a.push_back(x);
    }
    while(q--){
        
        cin >> y >> z ;
        cout << a[y][z] << endl;
    }

    return 0;
}
