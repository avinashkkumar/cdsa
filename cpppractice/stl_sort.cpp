#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    vector<int> v;
    std::cin >> n;
    while(n--){
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    n = v.size();
    sort(v.begin(),v.end());
    while(n--){
        cout << v[v.size()-n-1];
    }
    cout << endl;
    return 0;
}