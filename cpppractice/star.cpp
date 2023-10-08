#include <iostream>
#include <string>

using namespace std;

int main(){
    int n{50};
    string s;
    for(int i = 1 ; i <= n ; i++ )
    {   
        s="";
        for(int k = 0 ; k < (n-i); k++){
            s = s + " ";
        }
        for(int j = 0 ; j < i ; j++){
            s = s + "*" ;
        }
        for(int j = 0 ; j < i ; j++){
            s = s + "*" ;
        }
        cout << s << endl;
        // cout << i << endl;
    }
    

}