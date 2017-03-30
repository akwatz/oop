#include <iostream>
#include <string.h>
using namespace std;
class String{
	int m_len;
	char* m_buff;
public:
	String(){
		m_len=0;
	}
	String(const char* data){
		m_len=strlen(data);
		m_buff=new char[m_len+1];
		strcpy(m_buff,data);
	}
	String(const String &data){
		m_len=data.m_len;
		m_buff=new char[m_len+1];
		strcpy(this->m_buff,data.m_buff);
	}
	void operator =(const char*data){
		m_len=strlen(data);
		m_buff=new char[m_len+1];
		strcpy(m_buff,data);
	}
	friend ostream& operator <<(ostream &out,const String &data);
	~String(){
		delete m_buff;
	}
};
ostream& operator <<(ostream &out,const String &data){
	out<<data.m_buff;
	return out;
}
class Book{
	String authorName;
	String bookName;
	double price;
public:
	Book(const char* bName,const char* aName,double bPrice){
		authorName=aName;
		bookName=bName;
		price=bPrice;
	}
	void print(){
		cout<<bookName<<endl;
		cout<<authorName<<endl;
		cout<<price<<endl;
	}
};
main(){
	Book b1("Programming","Dennis Ritchie",320);
	b1.print();
}