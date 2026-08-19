#include <string>
#include <iostream>
using namespace std;


void del(){
    string val;
    cout<<"Entrez une chaine: ";
    getline(cin, val);
    
    if(val.length() >= 2){
        val.erase(0, 1);
        val.erase(val.size()-1);
        cout<<val;

    }else{
        return;
    }
    
}


int main(){
    del();
    return 0;
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