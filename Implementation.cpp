#include "HEADERFILE.h"
// function to view the a specific line when a character is different.
void viewLine(string s, int line){
    int l = 1;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '\n') l++;
        if (line == l) {
            cout << s[i];
        }
    }
}
// Comparing characters
void charCompare(ifstream &f1, ifstream &f2){
    stringstream strStream1, strStream2;
    string s1, s2; int lineCounter = 1;
    strStream1 << f1.rdbuf();
    strStream2 << f2.rdbuf();
    s1 = strStream1.str();
    s2 = strStream2.str();

    for (char &ch : s1) ch = tolower(ch);
    for (char &ch : s2) ch = tolower(ch);

    for (int i = 0; i < s1.size(); i++){
        if (s1[i] == '\n')lineCounter++;
        if (s1[i] == s2[i]){}
        else {
            cout << "The two files are not identical!" << endl;
            cout << "Line No. " << lineCounter << endl;
            viewLine(s1, lineCounter);
            return;
        }
    }
    cout << "The two files are identical using Char by Char Comparison." << endl;
}
// checking the equality of two words
bool wordCheck(string s1, string s2){
    return (s1 == s2);
}
// Comparing words
void wordCompare(ifstream &f1, ifstream &f2){

    stringstream strStream1, strStream2;
    string s1, s2; int lineCounter = 1;
    strStream1 << f1.rdbuf(); strStream2 << f2.rdbuf();
    string msg = strStream1.str(); // storing file 1 in a string

    string word = ""; int lsize = 0;
    bool identical = false;

    while (strStream1 >> s1 and strStream2 >> s2){
        if (!wordCheck(s1, s2)) {
            identical = true;
            cout << "The two files are not identical!" << endl;
            cout << "Word: " << s1 << endl;
            break;
        }
    }
    int line = 1;
    if (identical){
        for (int i = 0; i < msg.size(); i++){
            word = "";
            if (msg[i] == '\n') line++;
            if (msg[i] == 32){
                word = msg.substr(lsize, i - lsize);
                lsize += (word.size() + 1);
                if (word == s1) {
                    cout << "Line No. " << line << endl;
                    return;
                }
            }
        }
    }
    cout << "The two files are identical using Word by Word Comparison." << endl;
}
