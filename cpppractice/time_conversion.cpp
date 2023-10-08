#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string st = "A";
    if(s[8]==st[0]){
        if((int)(s[0]+s[1]) > 0 ){
            cout << (int)s[1] << endl;
            return s;
        }else if((int)(s[0]+s[1]) == 12){
            s[0] == s[1] == '0';
        }
    }else if((int)(s[0]+s[1]) > 12) {
        cout << "pm";
    }
    return "hello";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    // fout.close();

    return 0;
}
