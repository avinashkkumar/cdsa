#include<iostream>
#include<string>

namespace local
{
    int charCounter(char s[]){
        int i;
        for(i = 0; s[i] != '\0' ; i++);
        return i;
    }


    int charCounter(std::string s){
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


    bool pelendromeCheck(std::string s){
        int l = charCounter(s)-1;
        int i = 0;
        bool flag = true;
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


    char toLowerCaseChar(char c){
        if(c>='a' && c<='z'){
            return c;
        }else{
            return (c-'A')+'a';
        }
    }

    std::string tolowerCaseString(char c[]){
        int s = local::charCounter(c);
        for(int i = 0 ; i < s ; i++){
            if(c[i]>='a' && c[i]<='z'){
                c[i] = c[i];
            }else{
                c[i] = (c[i]-'A')+'a';
            }
        }
        return c;
    }

    int stringToInt(std::string s){
        int l = local::charCounter(s);
        int rint = 0;
        for(int i = 0 ; i < l ; i++){
            rint = rint*10;
            rint = rint + (s[i] - '0');
        }
        return rint;
    }


    bool specialCharacter(char c){
        if((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z') || (c>='0' && c <='9') ){
            return 1;
        }else{
            return 0;
        }
    }


    bool chaeckPelendromeIgnoringSpecialChar(char s[]){
        int sl = local::charCounter(s);
        std::string temp;
        for(int i = 0 ; i < sl; i++){
            if(local::specialCharacter(s[i])){
                temp.push_back(local::toLowerCaseChar(s[i]));
            }
        }
        return local::pelendromeCheck(temp);
        
    }


    


} // namespace local




int main (){
    // char c[15] = "a#a@c$D&C!B*A";
    char c[15] = "";
    // int a[10] = {12,2,3,4,5,3,5};

    // printing charater array using for loop 
    // for(int i = 0 ; i < 10; i++){
    //     std::cout << c[i];
    // }

    // printing character array using cout statemetn
    // std::cout << c << std::endl;
    // character array are can be printed directly to terminal without the use of for loop

    // the same of printing of integer array withtout the use of for loop is not possible
    // the reason being that the variable will store address of first element of array
    // std::cout << a << std::endl;

    // if we try to print the value of variable a while dereferencing it will print the first element
    // std::cout << *a << std::endl;
    // std::cout << charCounter(c) << std::endl;

    // this will print the reverse of string on the terminal and dose no give any return value
    // local::rev(c);

    // the pelendrome of the string is checked without using second string. 
    // The function will return true or false for the prelendrome condition.
    // std::cout << std::boolalpha << local::pelendromeCheck(c) << std::endl;


    // std::cout << local::toLowerCaseChar('l') << std::endl;

    // same concept to converting individual character to lower string is used
    // just in a for loop making it occur for the entire string.
    // std::cout << local::tolowerCaseString(c) << std::endl;


    // converted the string to integer form if the integer is in form of number
    // for example "3232" will be converted into 3232 which is integer form.
    // int x = local::stringToInt("123456478");
    // std::cout << x << std::endl;
    // std::cout << typeid(x).name() << std::endl;

    std::cout << std::boolalpha << local::chaeckPelendromeIgnoringSpecialChar(c) << std::endl;

    return 0;
}