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
 	cout<<"姓名："<<name;
	cout<<"街道："<<address;
	cout<<"城市："<<city;
	cout<<"邮编："<<zip<<endl;
 }
 void Employee::setName(char *n){
 	strcpy(name, n);
 } 
 int main()
 {
 	Employee a("张三 ","平安街3号 "," 北京 "," 1000"); 
 	Employee b("李四 ","平安街3号 "," 北京 "," 1000");
 	a.display();
 	b.display();
 }
