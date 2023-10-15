#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::fstream myFile;
    myFile.open("text.txt",std::ios::out);
    if(myFile.is_open()){
        myFile << "Namaste duniys";
    }

}