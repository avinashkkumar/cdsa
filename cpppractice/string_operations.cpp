#include<iostream>
#include<string>

namespace local
{
    int charCounter(char s[]){
        int i;
        for(i = 0; s[i] != '\0' ; i++);
        return i;
    }


    void rev(char s[]){
        int sz = charCounter(s);
        for(int i = sz ; i >= 0 ; i--){
            std::cout << s[i];
        }
        std::cout << std::endl;
    }

    bool pelendromeCheck(char s[]){
        int l = charCounter(s)-1;
        int i = 0;
        bool flag = false;
        while(i<l){
            if(s[i]==s[l]){
                flag = true;
            }else{
                flag = false;
            }
            i++;l--;
        }
        return flag;
    }

} // namespace local




int main (){
    char c[10] = "abcdcba";
    // int a[10] = {12,2,3,4,5,3,5};

    // printing charater array using for loop 
    // for(int i = 0 ; i < 10; i++){
    //     std::cout << c[i];
    // }

    // printing character array using cout statemetn
    std::cout << c << std::endl;
    // character array are can be printed directly to terminal without the use of for loop

    // the same of printing of integer array withtout the use of for loop is not possible
    // the reason being that the variable will store address of first element of array
    // std::cout << a << std::endl;

    // if we try to print the value of variable a while dereferencing it will print the first element
    // std::cout << *a << std::endl;
    // std::cout << charCounter(c) << std::endl;

    local::rev(c);

    std::cout << std::boolalpha << local::pelendromeCheck(c) << std::endl;

    return 0;
}