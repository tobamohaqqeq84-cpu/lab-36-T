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

    int choice = 0;
    string code, newCode;

    do {
         showMenu();
         cin >> choice;

        switch (choice){
            case 1:
                cout << "---BST CONTENTS---" << endl;
                tree.displayInOrder();
                cout << "Finished loading codes from codes.txt " << endl;
                break;

            case 2:
                cout << "Enter the code to search for: ";
                cin >> code;
             if (tree.searchNode(code)) {
                    cout << "Code /"<< code << "/ was found in the tree." << endl;
                } else {
                    cout << "Code /" << code << "/ was not found." << endl;
                }
             break;

            case 3:
                cout << "Enter the code to add: ";
             cin >> code;
             tree.insertNode(code);
             cout << "Code /" << code << "/ was added to the tree." << endl;
             break;

            case 4:
                cout << "Enter the code to remove: ";
             cin >> code;
            if(tree.searchNode(code)){
                tree.remove(code);
                cout << "Code /" << code << "/ was removed from the tree." << endl;
            }
            break;

             case 5:
             cout << "Enter the code to modify: ";
             cin >> code;
             if (!tree.searchNode(code)){
                 cout << "Code /" << code << "/ was not found." << endl;
             } else {
                 cout << "Enter the code value: ";
                 cin >> newCode;
                 tree.remove(code);
                 tree.insertNode(newCode);
                 cout << "Code /" << code << "/ was modified to /" << newCode << "/." << endl;}
             break;
             case 6:
                 cout << "Exiting program." << endl;
                 break;
             default:
             cout << "Invalid choice. Please try again." << endl;
            }
             }while (choice != 6);
        return 0;
        }
   //End of the programmmm