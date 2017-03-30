#include <iostream>
#include <string>
using namespace std;
class Person{
public:
	string m_name;
	int m_age;
	Person(string name="No Name",int age=0){
		m_name=name;
		m_age=age;
	}
};
class Player:public Person{
	int m_avg;
public:
	Player(int avg){
		m_avg=avg;
	}
	friend ostream& operator<<(ostream& out,Player &p);
};
ostream& operator<<(ostream& out,Player& p){
	out<<p.m_name<<"\t"<<p.m_age<<"\t"<<p.m_avg;
	return out;
}
int main(){
	Player p(67);
	p.m_name="Aman";
	p.m_age=21;
	cout<<p<<endl;
	return 0;
}