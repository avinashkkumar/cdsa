#include <iostream>

using namespace std;

int main(){
    unsigned long a = 8;
    unsigned long  * ptr = &a;
    string c = "1000000000000000000";
    cout << c << endl;
    *ptr = 10;
    cout << ptr << endl;
    cout << a << endl;
    cout << sizeof(a) << endl;
}  