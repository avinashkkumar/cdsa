#include<bits/stdc++.h>
int main(){
    using namespace std;
    int a{45};
    int *a_ptr{&a};
    int *none_ptr{};
    double *double_ptr{};
    cout << "the address of a is " << &a << endl;
    cout << "the address of a in a_ptr is " << a_ptr << endl;
    cout << "the address of a_ptr is " << &a_ptr << endl;
    cout << "the value of address stored by the a_ptr pointer is " << *a_ptr << endl;
    cout << none_ptr << endl;
    cout << "The size of double is " << sizeof(double) << "and the size of double polinter is " << sizeof(double_ptr) << endl ;
    cout << "The size of double is " << sizeof(a) << "and the size of double polinter is " << sizeof(a_ptr) << endl ;
    cout << "The size of none ptr is " << sizeof(none_ptr) << endl ;
}