#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){

    ifstream score("score.txt");
    string text;
    float N=0,x=0,M=0,SD=0,z=0 ;
    float i=0 ;
    while(getline(score,text)){
        i++;
        x=x+atof(text.c_str());
        z=z+pow(atof(text.c_str()),2);
    }
    
    N = 1/i ;
    M = N*x ;
    SD = sqrt((N*z)-pow(M,2));

    cout << "Number of data = " << i << endl ;
    cout << "Mean = " << M << endl ;
    cout << "Standard deviation = " << SD ;

    return 0 ;
}

//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
