#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x , y, z;
	    cin >> x >> y;
	    z = x;
        cout << z << endl;
	    if (y < x){
	        z += (x - y);
	    }
	    cout << z << endl;
	}
	return 0;
}
