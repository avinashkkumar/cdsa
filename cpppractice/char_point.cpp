#include<bits/stdc++.h>
using namespace std;
int main(){
    const char *charptr{"Hello World!"};
    // here the const is used with the char as the the above line is treated as character array and that should not change 
    // as per the gcc compiler so use const with chat to point to a string of character.
    cout << charptr  << endl;
    cout << *charptr << endl;
    // Actually the pointer used for the string just point to the first character of the character array
    // but when printing without referencing to pointer it will print the entire string
    return 0;
}