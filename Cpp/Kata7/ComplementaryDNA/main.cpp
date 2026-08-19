#include <iostream> 

std::string DNAStrand(const std::string& dna){
    std::string result{};
    for(const auto v : dna){
        if(v == 'A'){
            result.push_back('T');
        }else if(v == 'T'){
            result.push_back('A');
        }else if(v == 'C'){
            result.push_back('G');
        }else if(v == 'G'){
            result.push_back('C');
        }
        else{
            result = "Sa merde";
        }
    }
    return result;
}

int main(){
    std::cout<<DNAStrand("ATTGC")<<std::endl;
    return(0);
}