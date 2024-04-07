#include "Parser.cpp"
#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

class Solver: public  Parser{
    public:
    double dist(int i,int j){
        return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
    }
    
    Solver(string f_name): Parser(f_name){
        vector <int> track(N);
        //create a random path
        for(int q=0;q<N;q++){
            track[q]=q;
        }
        for(int k=0;k<N-1;k++){
          for(int j=k+2;j<N;j++){
            if(dist(track[k+1],track[(j+1)%N])+dist(track[k],track[j])<dist(track[k],track[k+1])+dist(track[j],track[(j+1)%N])){
                for(int s=0;s<abs(j-k)/2;s++){
                swap(track[k+1+s],track[j-s]);
                }
                j=k+2;
            }
          }
    }
   //counting the length of the path
   double l=dist(track[N-1],track[0]);
   for(int q=0;q<N-1;q++){
     l+=dist(track[q],track[q+1]);
     //cout<<dist(track[q],track[q+1])<<endl;
   }
   cout<<l<<" "<<0<<endl;
   for(int q=0;q<N;q++)
      cout<<track[q]<<" ";
   cout<<0<<endl;
    }
};