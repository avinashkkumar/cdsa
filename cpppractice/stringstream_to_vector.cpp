#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    int co{0},a;
    cin >> s;
    stringstream ss(s);
    vector<int> x;
    while(true){
        if(ss>>a){
            x.push_back(a);
            char ch{};
            ss >>ch;
            co++;
        }else{
            break;
        }
    }
    for(size_t i = 0 ; i <co; i++){
        cout << x[i] << endl;
    }
    
    return 0;
}