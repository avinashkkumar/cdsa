#include<iostream>

using namespace std;

void change(int *a );

int main(){
    int a = 2222;
    change(&a);
    cout << a << endl;
}

void change(int *a){
    *a = 1234;
}