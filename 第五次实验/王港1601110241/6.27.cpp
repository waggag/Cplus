#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		Employee(char *n,char *adr, char *ct,char *z);
		void setName(char *n);
		void display();
	private:
		char name[30];
		char address[30];
		char city[18];
		char zip[6]; 
 };
 Employee::Employee(char *n,char *adr,char *ct,char *z){
 	strcpy(name, n);
 	strcpy(address, adr);
 	strcpy(city, ct);
 	strcpy(zip, z);
 }
 void Employee::display(){
 	cout<<"������"<<name;
	cout<<"�ֵ���"<<address;
	cout<<"���У�"<<city;
	cout<<"�ʱࣺ"<<zip<<endl;
 }
 void Employee::setName(char *n){
 	strcpy(name, n);
 } 
 int main()
 {
 	Employee a("���� ","ƽ����3�� "," ���� "," 1000"); 
 	Employee b("���� ","ƽ����3�� "," ���� "," 1000");
 	a.display();
 	b.display();
 }
