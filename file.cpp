#include <iostream>
#include <fstream>
#include <cstdlib.h>
#include <string>
int main(){
	ofstream outf("Simple.txt");
	if(!outf){
		cout<<"Error in ofstream\n";
	}
	outf<<"This is Line 1\n";
	outf<<"This is Line 2\n";
	ifstream inf("Simple.txt");
	if(!inf){
		cout<<"Error in opening file\n";
	}
	while(inf.eof()){
		string str;
		getline(inf,str);
	}
	inf.close();
	return 0;
}
