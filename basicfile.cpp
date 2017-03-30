#include <iostream>
#include <fstream>
//#include <cstdlib.h>
#include <string>
using namespace std;
int main(){
	ofstream outf("Simple.txt");
	if(!outf){
		cout<<"Error in ofstream\n";
	}
	outf<<"This is Line 1\n";
	outf<<"This is Line 2\n";
	outf.close();
	ifstream inf("Simple.txt");
	if(!inf){
		cout<<"Error in opening file\n";
	}
	while(inf){
		string str;
		getline(inf,str);
		cout<<str<<endl;
	}
	inf.close();
	return 0;
}
