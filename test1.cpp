#include <iostream>
#include <string>
using namespace std;
class Animals{
	string m_name;
	string m_speaks;
public:
	Animals(string name="Animal",string speaks="???"):
		m_name(name),m_speaks(speaks)
	{

	}
	 virtual string getName(){
		return m_name;
	}
	 virtual string getSpeak(){
		return m_speaks;
	}
};
class Cat:public Animals{
	string m_name,m_speaks;
public:
	Cat(string name,string speaks):
		m_name(name),m_speaks(speaks){

		}
		string getName(){
			return m_name;
		}
		string getSpeak(){
			return m_speaks;
		}
};
class Dog:public Animals{
	string m_name,m_speaks;
public:
	Dog(string name,string speaks):
			m_name(name),m_speaks(speaks){

		}
		string getName(){
			return m_name;
		}
		string getSpeak(){
			return m_speaks;
		}
};
void report(Animals &animal){
	cout<<animal.getName()<<" speaks "<<animal.getSpeak()<<endl;
}
int main(){
	Cat cat("Pussy","Meow");
	Dog dog("Tommy","Bhow Bhow");
	report(cat);
	report(dog);
	return 0;
}