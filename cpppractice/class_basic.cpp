#include <iostream>
#include <string>
using namespace std;


class student{
    private:
        int age;
        string f_name;
        string l_name;
        int stand;
    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }

        void set_f_name(string s_f_name){
            f_name = s_f_name;
        }
        string get_f_name(){
            return f_name;
        }

        void set_l_name(string s_l_name){
            l_name = s_l_name;
        }
        string get_l_name(){
            return l_name;
        }

        void set_stand(int b){
            stand = b;
        }
        int get_stand(){
            return stand;
        }
};

int main(){
    int ag,st;
    string fn, ln;
    student stu;
    cin >> ag;
    cin >> fn;
    cin >> ln;
    cin >> st;
    stu.set_age(ag);
    stu.set_f_name(fn);
    stu.set_l_name(ln);
    stu.set_stand(st);

    cout << stu.get_age() << endl << stu.get_l_name() << ", " << stu.get_f_name() << endl << stu.get_stand() << endl << endl;
    cout << stu.get_age() << "," << stu.get_f_name() << "," << stu.get_l_name() << "," << stu.get_stand() << endl;
}