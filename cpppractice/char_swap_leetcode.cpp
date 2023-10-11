#include<iostream>
#include<string>
#include<algorithm>

namespace local
{
    bool swapCheck(std::string s1, std::string s2){
    bool flag = NULL;
    if(s1==s2){
            return true;
        }
    for(int i = 0 ; i < 2 ; i++){
        std::swap(s1[i],s1[i+2]);
        if(s1==s2){
            return true;
        }
    }
    return false;
    }
} // namespace local

namespace another
{
    
    bool swapCheck(std::string s1, std::string s2){
    bool flag = NULL;
    if(s1==s2){
            return true;
        }
    for(int i = 0 ; i < 2 ; i++){
        std::swap(s1[i],s1[i+2]);
        if(s1==s2){
            std::cout << "hello" << std::endl;
            return true;
        }
    }
            std::cout << "hello" << std::endl;
    return false;
    }
} // namespace another


int main(){
    std::string s1 = "abcd";
    std::string s2 = "cbad";
    std::cout << std::boolalpha << another::swapCheck(s1,s2) << std::endl;

}