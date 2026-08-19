#include <iostream>
#include <string>


int wordsToMarks(const std::string& str){
    int sum = 0;
    char a = 'a';

    for(size_t i = 0; i < str.length(); i++){
        sum += ((int)str[i] - (int)a) + 1;
    }

    return sum;
}

int main(){
    std::cout<<wordsToMarks("attitude");
}