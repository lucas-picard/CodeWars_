#include <iostream>
using namespace std;

void litres(int time) {
    int L = 0;
    for(int i = 0; i < time; ++i){
        L = time * 0.5;
    }
    cout<<L;
}

int main(){
    litres(6.7);
}