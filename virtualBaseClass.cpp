#include <iostream>
using namespace std;
class PowerDevice{
public:
	PowerDevice(int power){
		cout<<"Power "<<power<<endl;
	}
};
class Printer:virtual public PowerDevice{
public:
	Printer(int printer,int power):PowerDevice(power){
		cout<<"Printer "<<printer<<endl;
	}
};
class Scanner:virtual public PowerDevice{
public:
	Scanner(int scanner,int power):PowerDevice(power){
	cout<<"Scanner "<<scanner<<endl;
	}
};
class Copier:public Scanner,public Printer{
public:
	Copier(int scanner,int printer,int power):
	Scanner(scanner,power),Printer(printer,power),PowerDevice(power){}
};
int main(){
	Copier c(1,2,3);
}