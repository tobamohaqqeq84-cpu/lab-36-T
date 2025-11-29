//Toba Mohaqqeq
//COMSC-210
//Lab 36

#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

void loadCodesFromFile(string filename, IntBinaryTree &tree);
if(!inFile) {
    cout << "Error opening file." << endl;
    return;
}
    string code;

    while (inFile >> code){
        tree.insertNode(code);
    }
inFile.close():
    cout << "Finished loading codes from " << filename << endl;
}

int main() {
    IntBinaryTree tree;

tree.insertNode("HELLO");
tree.insertNode("WORLD");
tree.insertNode("YAY");
    
    cout << "Testing for Milestone2" << endl;
    tree.displayInOrder();
    
return 0;
}
