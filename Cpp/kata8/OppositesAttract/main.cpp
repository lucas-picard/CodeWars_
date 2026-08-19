#include <iostream>
using namespace std;

void lovefunc(int f1, int f2) {
  if (f1 % 2 == 0 && f2 % 2 == 1 || f2 % 2 == 0 && f1 % 2 == 1){
    cout<<"Ils sont amoureux";
  }else{
    cout<<"Et non pas amoureux, Dommage !";
  }
}

int main(){
    lovefunc(10, 4);
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