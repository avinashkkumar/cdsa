#include <bits/stdc++.h>
using namespace std;

int main(){
    int mat1 [2][2]= {2,3,4,5};
    int mat2 [2][2]= {3,4,5,6};
    int mat3 [2][2]= {};
    for(size_t i = 0 ; i < 2; i++){
        for (size_t j = 0; j < 2; j++)
        {   
            cout << setw(5)<<mat1[i][j] * mat2[i][j];
        }
        cout<<endl;
        
    }
}