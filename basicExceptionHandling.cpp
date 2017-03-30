#include <iostream>
#include <math.h>
#include <string>
using namespace std;
double squareRoot(double no){
	try{
		if(no<0)
			throw("Number is negative\n");
		return sqrt(no);
	}
	catch(char const* Exception ){
		cout<<Exception;
	}
}
int main(){
	cout<<squareRoot(9)<<endl;
	cout<<squareRoot(-1)<<endl;
	return 0;
}