#include<iostream>
#include<string>
using namespace std;
int main(){
    struct student{
        int age;
        string f_name;
        string l_name;
        int stand;
    };
    student s;
    cin >> s.age ;
    cin >> s.f_name;
    cin >> s.l_name;
    cin >> s.stand;
    cout << s.age << " " << s.f_name << " " << s.l_name << " " << s.stand << endl;
}