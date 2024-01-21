#include<iostream>
#include<cmath>
int main(){
    int n = 123;
    int ans = 0;
    for (size_t i = 0; n!=0; i++)
    {
        int x = n%10;
        n=n/10;
        ans = ans*10 + x;
    }
    std::cout << ans << std::endl;
    
}

/*

psudocode to reverse given number

start a for loop
loop will start wil size_t datatype and with 0
loop will end at point where n becomes 0
    for loop code 
    take modoluo of the number to get the last digit of the number in a variable 
    divide the number by 10 to eliminate the last digit from given number
    multiply the answer by 10 and then add the last digit variable
and keep increasing i
*/