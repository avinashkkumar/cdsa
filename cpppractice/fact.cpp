#include <iostream>

using namespace std;

int main(){
    int n; int fact{1};
    cout << "enter the number for factorial" << endl ;
    cin >> n;
    for(size_t i = n ; i > 0; i--){
        fact = fact * i;
    }
    cout << "----------------------"<< endl;
    cout << fact << endl;

}