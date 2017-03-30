#include <iostream>
#include <math.h>
using namespace std;
template <typename T>
T root(T num){
	if(num<0)
		throw("Cannot compute square root of the number");
	return sqrt(num);
}
int main(){
	try{
		cout<<"Square root of 9 is "<<root(9)<<endl;
		cout<<"Square root of -1 is ";
		cout<<root(-1)<<endl;
	}
	catch(const char* error){
		cout<<endl<<"Error : "<<error<<endl;
	}
	cout<<"Back to main"<<endl;
	return 0;
}