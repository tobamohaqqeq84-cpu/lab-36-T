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
    
}

void showMenu(){
    cout << "---BST Menu---" << endl;
    cout << "1. Display all codes \n";
    cout << "2. Search for a code \n";
    cout << "3. Add a new code \n";
    cout << "4. Remove a code \n";
    cout << "5. Modify a code \n";
    cout << "6. Exit \n";
    cout << "Enter your choice:";

}

int main() {
  IntBinaryTree tree;
    
  loadCodesFromFile("codes.txt", tree);

    int choice

     tree.displayInOrder();

  cout << "---BST CONTENTS---" << endl;
    cout << "Finished loading codes from codes.txt " << endl;
    


    
  return 0;
}
