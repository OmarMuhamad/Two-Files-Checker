// This is a program to compare between two files using word by word comparison
// and char by char comparison
// Author: Omar Mohammad Fayek
#include "HEADERFILE.h"

int main(){
    ifstream File1; ifstream File2;
    char name1[101], name2[101];
    cin.getline(name1, 100, '\n');
    cin.getline(name2, 100, '\n');
    strcat(name1, ".txt"); strcat(name2, ".txt");

    File1.open(name1); File2.open(name2);

    if (!(File1 and File2))
        cout << "Failed to open one of the files or both files are not created" << endl;
    else {
        cout << "(1) - Comparison by Word.\n(2) - Comparison by Char." << endl;
        int choice; cin >> choice;
        if (choice == 1) wordCompare(File1, File2);
        else charCompare(File1, File2);
    }
return 0;
}
