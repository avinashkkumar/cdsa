#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \
    int n;
    vector<int> v;
    int x,a,b;
    std::cin >> n;
    while(n--){
        int x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cin >> x;
    std::cin >> a >> b;

    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);

    n = v.size();
    std::cout << n << std::endl;
    while(n--){
        std::cout << v[v.size() - n - 1] << " ";
    }

    std::cout<<endl;
    return 0;
}
