#include <iostream>
using namespace std;
template <typename T1,typename T2,typename T>
T Max(T1 n1,T2 n2){
	return n1>n2?n1:n2;
}
int main(){
	int n1(5);
	int n2(8);
	cout<<Max(5,8)<<endl;
	cout<<Max(5.5,0.5)<<endl;
	cout<<Max(5.4f,4.0)<<endl;
	cout<<Max(4,5.5)<<endl;
	return 0;
}
