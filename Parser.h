#include <fstream> 
#include <string>
#include <iostream>
using namespace std;

class Parser{
protected:
ifstream file;
public:   
int N;
double* x;
double* y;
Parser(string f_name);
~Parser();
 
};