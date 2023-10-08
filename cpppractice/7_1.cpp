#include<bits/stdc++.h>
int main(){
    using namespace std;
    int x1, y1, x2, y2;
    cout << "enter the x coordinate of first point : ";
    cin >> x1;
    cout << "enter the y coordinate of first point : ";
    cin >> y1;
    cout << "enter the x coordinate of second point : ";
    cin >> x2;
    cout << "enter the y coordinate of second point : ";
    cin >> y2;
    cout << "distance between two poinnt are : " << sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return 0;
}