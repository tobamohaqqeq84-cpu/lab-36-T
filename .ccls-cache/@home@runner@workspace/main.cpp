//Toba Mohaqqeq
//COMSC-210
//Lab 36

#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;

tree.insertNode("HELLO");
tree.insertNode("WORLD");
tree.insertNode("YAY");
    
    cout << "Testing for Milestone2" << endl;
    tree.displayInOrder();
    
return 0;
}
