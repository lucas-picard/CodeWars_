#include <iostream>
#include <string>
using namespace std;


void isDivisible(int n, int x, int y) {
    if(n % x == 0 && n % y == 0){
        cout<<"true";
    }else{
        cout<<"Pas divisible";
    }
}


int main(){
    isDivisible(100, 5, 3);
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
0110000101110011     */