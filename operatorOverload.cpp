#include <iostream>
using namespace std;
//Definition of the class
class Point{
//Member variables
	int m_x,m_y,m_z;
public:
//Constructor
	Point(int x=0,int y=0,int z=0){
		m_x=x;
		m_y=y;
		m_z=z;
	}
//Overloading + operator
	friend Point operator+(const Point &p1,const Point &p2);
//Overloading << operator
	friend ostream& operator<<(ostream &out,const Point &p);
};
class IntArray{
	int m_arr[10];
public:
	IntArray(){
		for(int i=0;i<10;i++)
			m_arr[i]=i;
	}
	int& operator[](const int &index){
		return m_arr[index];
	}
};
//Function definition of the overloaded operator
Point operator+(const Point &p1,const Point &p2){
	Point p(p1.m_x+p2.m_x,p1.m_y+p2.m_y,p1.m_z+p2.m_z);
	return p;
}
//Function definition of the overloaded << operator
ostream& operator<<(ostream& out,const Point &p){
	out<<"("<<p.m_x<<","<<p.m_y<<","<<p.m_z<<")";
	return out;
}
int main(){
	Point p1(4,5);
	Point p2;
	Point p3(p1+p2);
	Point p4=p1+p3;
	cout<<"P1 is"<<p1<<endl;
	cout<<"P4 is"<<p1+p3<<endl;
	cout<<"P4 is"<<p4<<endl;
	IntArray arr;
	arr[5]=55;
	for(int i=0;i<10;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	return 0;
}