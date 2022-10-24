#ifndef HEADERFILE_H_INCLUDED
#define HEADERFILE_H_INCLUDED
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

void charCompare(ifstream &, ifstream &);
void wordCompare(ifstream &, ifstream &);
void viewLine(string, int);
bool wordCheck(string s, string x);

#endif // HEADERFILE_H_INCLUDED
