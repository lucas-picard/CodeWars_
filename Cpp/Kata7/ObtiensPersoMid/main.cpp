#include <iostream>
#include <string>
using namespace std;

void get_middle(string input) {
    
  if(input.length() % 2 == 0){
    cout<<input[input.length() / 2 - 1]<<input[input.length() / 2];
  }else{
    cout<<input[input.length() / 2];
  }
}

int main(){
    get_middle("test");
    get_middle("lucas");
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

