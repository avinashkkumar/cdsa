#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    const char * hour = s.substr(0,2).c_str();
    char h = *hour;
    std::cout << hour << std::endl;
    std::cout << h << h << std::endl;
    const char * minutes = s.substr(3,2).c_str();
    const char * seconds = s.substr(6,2).c_str();

    return s;

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
