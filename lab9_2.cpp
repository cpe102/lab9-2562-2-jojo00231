#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){	
	
	ifstream cheerbook("cheerbook.txt");
	ofstream cheerbook_copy("cheerbook_copy.txt");
	
	cheerbook_copy << "-------------------- SOTUS ---------------------\n" ;
	string textline;
	while(getline(cheerbook,textline)){
		cheerbook_copy << textline << endl ;
	}
	
	cheerbook_copy <<"-------------------- SOTUS ---------------------" ;
	

	return 0 ;
}
