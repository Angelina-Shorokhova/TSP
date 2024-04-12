#include "Parser.h"
#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Solver: public  Parser{
    public:
    double dist(int i,int j);
    
    Solver(string f_name);
};