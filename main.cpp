// Toba Mohaqqeq
// COMSC-210
// Lab 36

#include "IntBinaryTree.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void loadCodesFromFile(const string &filename, IntBinaryTree &tree){
    ifstream inFile(filename);  
if(!inFile) {        
cerr << "Error opening file." << endl;         return;     }   
    string code;     
    while (inFile >> code){         tree.insertNode(code);     }   
    inFile.close();     
    cout << "Finished loading codes from " << filename << endl;
}

int main() {
  IntBinaryTree tree;

  loadCodesFromFile("codes.txt", tree);

  cout << "BST contents from codes.txt" << endl;
  tree.displayInOrder();

  return 0;
}
