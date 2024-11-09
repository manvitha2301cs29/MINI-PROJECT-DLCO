// A Manvitha Reddy 2301cs29 
#include <bits/stdc++.h>
using namespace std;
// for  storing opcodes in a partivular way
map<string, pair<string, int>> opcode;
// to store warnings , errors
map<int, string> warnings, errors;
struct Listing{
string address_counter; // used to show memory address in hexadecimal for each line of code
string machine_code;    // used to represent final machine code for each instruction in hexadecimal format
string text;            // used to represent original source code 
};
map<int , pair<string, pair<string,string> > > lineDetails ; 
// used to represent details of lines of assembly code
map<string,vector<int> > ;



