#include<iostream>
using namespace std;

class Dog
{
	public:
		Dog(int Age = 0,int Weight = 5);	//���췽�� 
		~Dog();		//�������� 
		//�ĸ����� 
		int GetAge(){
			return age;
		}
		int GetWeight(){
			return weight;
		}
		int SetAge(int _age){
			age = _age;
		}
		int SetWeight(int _weight){
			weight = _weight;
		}
		void show();	//��ʾDog������ 
	private:
		int age;
		int weight; 
} ;

Dog::Dog(int _Age, int _Weight)	//���캯�� 
{
	age = _Age;
	weight = _Weight;
}

Dog::~Dog(){			//�չ��캯�� 
}

void Dog::show(){		//show method ����ʵ�� 
	cout<<"The Dog age is " <<age<<",weight is "<<weight<<endl;
}
 int main()
 {
 	Dog myDog;    //ʹ��Ĭ�Ϲ��캯�� 
 	cout<<"First Dog:"<<endl;
 	myDog.show();
 	cout<<"Second Dog:"<<endl;
 	Dog myDog2(2, 20);	 
 	myDog2.show();
 	
 }
 
