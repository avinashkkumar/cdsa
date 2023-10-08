#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    char fi;
    int count=0;
    cout << "enter the string ";
    std::getline(cin,str);
    cout << "enter the character that has to be counted ";
    cin >> fi;
    for(size_t i = 0 ; i < str.length(); i++){
        if (str[i] == fi){
            count+=1;
        } 
    }
    cout << count << endl;
}