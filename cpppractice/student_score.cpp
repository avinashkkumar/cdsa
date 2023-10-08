#include <iostream>
#include <string>
#include <vector>
using namespace std;

class scores{
    private:
        int s1,s2,s3,s4,s5,total;
    public:
        void input(){
            cin >> s1 >> s2 >> s3 >> s4 >> s5;
            total = s1 + s2 + s3 + s4 + s5;
        }
        int get_total(){
            return total;
        }
};

int main(){
    int n,nn,k,c{0};
    vector<scores> sc;
    cin >> n;
    nn = n;
    while(n--){
        scores s;
        s.input();
        sc.push_back(s);
    }
    k = sc[0].get_total();
    for(size_t i = 1 ; i <nn ; i ++){
        if (sc[i].get_total() > k){
            c++;
        }
    }
    cout << c << endl;
}