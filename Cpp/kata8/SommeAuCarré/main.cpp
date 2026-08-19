#include <vector>
#include <iostream>
using namespace std;

void square_sum(const vector<int>& numbers){
    int total = 0;
    for (int i : numbers)total += i * i;  
    
    cout<<"Somme carre: "<<total;
}
    

int main(){
    square_sum({1, 2, 2});
}




/*      ,-.
     / \  `.  __..-,O
    :   \ --''_..-'.'
    |    . .-' `. '.
    :     .     .`.'
     \     `.  /  ..
      \      `.   ' .
       `,       `.   \
      ,|,`.        `-.\
     '.||  ``-...__..-`
      |  |
      |__|
      /||\
     //||\\
    // || \\
 __//__||__\\__
'--------------' 

 010011001101111011011110111001101101011 
0110000101110011      */