#include <iostream>
#include <string>
#include <list>
using namespace std;

void sum(){
    int num_vowels = 0;
    string texte = "je suis la phrase";

    list<string> li{"a", "e", "i", "o", "u"};

    for (int i = 0; i < texte.length(); ++i) {
        for(const auto & element : li){
            cout<<element<<endl;
        }
    }
}

int main(){
    sum();
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