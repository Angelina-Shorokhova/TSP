#include "Parser.h"
#include <iostream>
using namespace std;


Parser::Parser(string f_name){
file.open(f_name);
if (file.is_open()){
  string s;   
  getline(file,s,'\n'); 
  N=stoi(s);
  x=new double[N];
  y=new double[N];
  for(int i=0;i<N;i++){
     getline(file,s,' ');  
     x[i]=stod(s);
     getline(file,s,'\n'); 
     y[i]=stod(s);
     }
}

else 
  cout<<"Error:file is close"<<endl;
}


Parser::~Parser(){
file.close();
delete[]x;
delete[]y;
}
 
